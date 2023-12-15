stdlib.h

void* malloc(size_t size);

void* calloc(size_t block, size_t block_size);
void* realloc(void* block, size_t new_size);

void free(void* block);