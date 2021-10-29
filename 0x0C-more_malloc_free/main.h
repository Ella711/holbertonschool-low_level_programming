#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* allocates memory using malloc */
void *malloc_checked(unsigned int b);
/* cocatenates 2 strins limited by n */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* allocates memory for an array using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);


#endif /* MAIN_HEADER */

