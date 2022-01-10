#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Prints char */
int _putchar(char c);
/* function that checks for lowercase character */
int _islower(int c);
/* function that checks for alphabetic character */
int _isalpha(int c);
/* function that computes the absolute value of an integer */
int _abs(int);
/* checks for uppercase characters*/
int _isupper(int c);
/* function that checks for a digit (0 through 9) */
int _isdigit(int c);
/* returns length of string */
int _strlen(char *s);
/* prints the string */
void _puts(char *str);
/* copies a string */
char *_strcpy(char *dest, char *src);
/* converts a string to an integer */
int _atoi(char *s);
/* concatenate two strings */
char *_strcat(char *dest, char *src);
/* concatenates two strings using at most n bytes */
char *_strncat(char *dest, char *src, int n);
/* copies a string using at most n bytes */
char *_strncpy(char *dest, char *src, int n);
/* compares two strings */
int _strcmp(char *s1, char *s2);
/* function that fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);
/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* function that locates a character in a string */
char *_strchr(char *s, char c);
/* function that gets length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
/*  function that searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);
/* locates a substring */
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_HEADER */
