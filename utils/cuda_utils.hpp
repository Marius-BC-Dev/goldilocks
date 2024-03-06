#ifndef _CUDA_UTILS_H_
#define _CUDA_UTILS_H_

#include <stddef.h>

void* alloc_pinned_mem(size_t len);

void free_pinned_mem(void* ptr);

#endif      // _CUDA_UTILS_H_