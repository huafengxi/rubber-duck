%:
	make $(abspath $*) -C $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
