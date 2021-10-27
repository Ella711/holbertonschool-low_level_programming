#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/* creates an array of chars, and initializes it with a 
specific char */
char *create_array(unsigned int size, char c);
/* returns a pointer to a newly allocated space in 
memory, which contains a copy of the string */
char *_strdup(char *str);
/* concatenates two strings */
char *str_concat(char *s1, char *s2);
/* returns a pointer to a 2 dimensional array of 
integers */
int **alloc_grid(int width, int height);
/* frees a 2d grid */
void free_grid(int **grid, int height);

#endif /* MAIN_HEADER */
