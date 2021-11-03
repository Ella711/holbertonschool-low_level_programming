#ifndef FUNCTION_POINTERS_HEADER
#define FUNCTION_POINTERS_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/* Include Prototypes */

/* function that prints a name */
void print_name(char *name, void (*f)(char *));



#endif /* FUNCTION_POINTERS_HEADER */