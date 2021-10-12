#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>

/* Prints char */
int _putchar(char c);
/* update pointer value */
void reset_to_98(int *n);
/* swaps the value of integers */
void swap_int(int *a, int *b);
/* returns length of string */
int _strlen(char *s);
/* prints the string */
void _puts(char *str);
/* prints the string in reverse */
void print_rev(char *s);
/* reverses a string */
void rev_string(char *s);
/* prints every other character */
void puts2(char *str);
/* prints second half of the string */
void puts_half(char *str);
/* prints n elements of an array */
void print_array(int *a, int n);

#endif /* MAIN_HEADER */