#ifndef _SEARCH_ALGO_
#define _SEARCH_ALGO_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Functions prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
