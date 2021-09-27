typedef struct pool_t {
  link_t page_list;
} pool_t;

extern pool_t* pool_create(int64_t sz);
extern void* pool_alloc(pool_t* pool, int64_t sz);
extern void pool_destroy(pool_t* pool);
