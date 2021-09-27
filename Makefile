ns = rk_
uname_p := $(shell uname -p)
target1 = s/sys-feature s/segfault s/mbench s/cbench s/evdemo s/ndemo
target2 = s/lib-demo
target3 = s/nio-demo
target ?= $(target1) $(target2) $(target3)
.PHONY: all
all: $(target)

cc ?= gcc
cxx ?= g++

# release=1: perf mode, less log and check; release=2: debug mode, more log and check
release ?= 2
debug-cflags = -g -D__$(ns)release__=$(release)
ifeq ($(release),1)
debug-cflags += -O2
else ifeq ($(release),2)
endif

ifeq ($(uname_p),x86_64)
arch-spec-flags = -march=native
else
arch-spec-flags =
endif
# opt-flags = -mcmodel=medium -fno-strict-aliasing -march=native
opt-flags = -fno-strict-aliasing $(arch-spec-flags)
warn-cflags=-Wall -Wextra -Werror -Wshadow -Wno-missing-field-initializers -Wstrict-overflow
cflags=-std=gnu99 $(debug-cflags) $(warn-cflags) $(opt-flags) -rdynamic -fvisibility=hidden
cxxflags=$(debug-cflags) $(warn-cflags) $(opt-flags) -rdynamic -fvisibility=hidden -fpermissive
ldflags=-lpthread -ldl -Wl,-Tlds/rk.lds

src-list := $(shell b/src-list.sh)
gen-file-target = ns.h

cog: $(gen-file-target)
$(gen-file-target): $(src-list)
	ns=$(ns) ../cog2/cog.py $^
%.e: %.c
	$(cc) -E main.c -DSRC=$<
$(target1): %: %.c main.c $(gen-file-target) $(src-list)
	$(cc) -o $@ main.c -DSRC=$< $(cflags) $(ldflags)
$(target2): %: %.c all.c $(gen-file-target) $(src-list)
	$(cc) -o $@ $< all.c $(cflags) $(ldflags)
$(target3): %: %.cpp all.c $(gen-file-target) $(src-list)
	$(cxx) -o $@ $< $(cxxflags) $(ldflags)

%.tgz: .PHONY
	git archive HEAD . --prefix=rk/ -o $@
%/.pub:
	git archive HEAD . --prefix=rk/| tar x -C $*
clean:
	rm -rf $(target)

dest-host = 
%.rb:
	rsync -avz ../rk ../cog $(dest-host): && ssh $(dest-host) make -C rk -f Makefile --no-print-directory $*
