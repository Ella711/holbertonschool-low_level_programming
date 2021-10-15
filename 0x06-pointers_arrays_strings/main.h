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
/* changes all lowercase letters of a string to uppercase */
char *string_toupper(char *);
/* capitalizes all words of a string */
char *cap_string(char *);
/* leet speak */
char *leet(char *str);
/* encodes a string using rot13 */
char *rot13(char *);

#endif /* MAIN_HEADER */