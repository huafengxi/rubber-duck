typedef struct page_t {
  link_t link;
  int64_t pos;
  char buf[0];
} page_t;

static void* pool_direct_alloc(int64_t sz) {
  return dalloc(sz);
}

static void pool_direct_free(void* p) {
  dfree(p);
}

#define POOL_PAGE_SIZE (1<<16)
page_t* page_create(int64_t sz) {
  page_t* p = (page_t*)pool_direct_alloc(sz);
  if (p) {
    p->link.next = NULL;
    p->pos = sizeof(*p);
  }
  return p;
}

void* page_alloc(page_t* p, int64_t sz) {
    void* ret = NULL;
    if (p->pos + sz <= POOL_PAGE_SIZE) {
      ret = p->buf + p->pos;
      p->pos += sz;
    }
    return ret;
}

pool_t* pool_create(int64_t sz) {
  pool_t* pool = NULL;
  page_t* p = page_create(max(sz + sizeof(pool_t) + sizeof(page_t), POOL_PAGE_SIZE));
  if (p) {
    pool = (pool_t*)page_alloc(p, sizeof(pool_t));
    link_init(&pool->page_list);
    link_insert(&pool->page_list, &p->link);
  }
  return pool;
}

void pool_destroy(pool_t* pool) {
  link_for_each(&pool->page_list, n) {
    page_t* p = structof(n, page_t, link);
    pool_direct_free(p);
  }
}

static page_t* pool_tail_page(pool_t* pool) {
  return structof(pool->page_list.next, page_t, link);
}

void* pool_alloc(pool_t* pool, int64_t sz) {
  void* ret = NULL;
  page_t* p = NULL;
  if (NULL != (ret = page_alloc(pool_tail_page(pool), sz))) return ret;
  if (NULL == (p = page_create(sizeof(page_t) + sz))) return NULL;
  link_insert(&pool->page_list, &p->link);
  return page_alloc(p, sz);
}
