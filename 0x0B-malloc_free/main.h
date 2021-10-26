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

#endif /* MAIN_HEADER */
