#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>

/* concatenate two strings */
char *_strcat(char *dest, char *src);
/* concatenates two strings using at most n bytes */
char *_strncat(char *dest, char *src, int n);
/* returns length of string */
int _strlen(char *s);
/* Prints char */
int _putchar(char c);
/* copies a string using at most n bytes */
char *_strncpy(char *dest, char *src, int n);
/* compares two strings */
int _strcmp(char *s1, char *s2);
/* print array in reverse */
void reverse_array(int *a, int n);

#endif /* MAIN_HEADER */