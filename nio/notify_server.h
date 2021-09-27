typedef struct ntfs_sk_t {
  SOCK_COMMON;
  dlink_t dlink;
  int64_t sp;
  atomic_msg_t m;
} ntfs_sk_t;

typedef struct ntfs_sf_t {
  SOCK_FACTORY_COMMON;
  atomic_msg_t m;
  dlink_t sl;
} ntfs_sf_t;


typedef struct ntfs_t {
  eloop_t ep;
  evfd_t evfd;
  listenfd_t listenfd;
  ntfs_sf_t sf;
} ntfs_t;

extern int ntfs_init(ntfs_t* ns, addr_t addr);
extern void ntfs_start(ntfs_t* ns);
extern void ntfs_update(ntfs_t* ns, const char* msg, int64_t size);

#define __NOTIFY_FUNC(name) void name ## _notify(const char* msg, int64_t size) { return ntfs_update(&__ ## name ## _ntfs_svr, msg, size); }
#define NTFS(name) EXPORT ntfs_t __ ## name ## _ntfs_svr; __NOTIFY_FUNC(name); CMD(name, "notify server") { return ntfs_svr_minit(#name); }
