#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/* prints a char */
int _putchar(char c);
/* prints a string, followed by a new line */
void _puts_recursion(char *s);
/* prints a string in reverse */
void _print_rev_recursion(char *s);
/* finds the length of string */
int _strlen(char *s);
/* returns length of a string */
int _strlen_recursion(char *s);
/* returns factorial of an integer */
int factorial(int n);
/* returns the value of x raised to the power of y */
int _pow_recursion(int x, int y);
/* returns sqr root of n */
int _sqrt_recursion(int n);
/* returns 1 if prime, otherwise 0 */
int is_prime_number(int n);
/* returns 1 if palindrome, 0 if not */
int is_palindrome(char *s);

#endif /* MAIN_HEADER */