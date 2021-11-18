#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* function that converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);
/* prints the binary representation of a number */
void print_binary(unsigned long int n);

#endif /* MAIN_HEADER */

