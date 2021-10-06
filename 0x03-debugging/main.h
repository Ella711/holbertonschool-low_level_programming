#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <time.h>

/*positive_or_negative - Prints positive or negative*/
int positive_or_negative(int i);
/*largest_number - returns the largest of 3 numbers*/
int largest_number(int a, int b, int c);
/*convert_day - converts day of month to day of year, without accounting
*for leap year*/
int convert_day(int month, int day);
/*print_remaining_days - takes a date and prints how many days are
*left in the year, taking leap years into account*/
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
