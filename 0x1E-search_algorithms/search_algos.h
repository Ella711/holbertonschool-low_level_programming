#ifndef MAIN_HEADER
#define MAIN_HEADER

/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Searches for a value in an array of integers using linear search algorith */
int linear_search(int *array, size_t size, int value);
/* Uses the Binary search algorithm */
int binary_search(int *array, size_t size, int value);

#endif /* MAIN_HEADER */
