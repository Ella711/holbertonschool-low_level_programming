#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>

/* Prints char */
int _putchar(char c);
/* checks for uppercase characters*/
int _isupper(int c);
/* function that checks for a digit (0 through 9) */
int _isdigit(int c);
/* function that multiplies two integers */
int mul(int a, int b);
/* function that prints numbers followed by a new line */
void print_numbers(void);
/*  prints numbers 0 to 9 skipping 2 and 4 */
void print_most_numbers(void);
/* prints 10 times the numbers, from 0 to 14 */
void more_numbers(void);
/* draws a straight line in the terminal */
void print_line(int n);
/* prints a triangle, followed by a new line */
void print_triangle(int size);
/* draws a diagonal line on the terminal */
void print_diagonal(int n);
/* draws a square */
void print_square(int size);

#endif /* MAIN_HEADER */