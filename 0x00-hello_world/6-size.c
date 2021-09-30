#include <stdio.h>
/**
 * main - print sizes
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %lu bytes\n", sizeof(charType));
	printf("Size of int: %lu bytes\n", sizeof(intType));
	printf("Size of long int: %llu bytes\n", sizeof(longintType));
	printf("Size of long long int: %llu byte\n", sizeof(longlongintType));
	printf("Size of float: %lu byte\n", sizeof(floatType));
	return (0);
}
