#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>

/* function that fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);
/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* function that locates a character in a string */
char *_strchr(char *s, char c);
/* function that gets length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

#endif /* MAIN_HEADER */