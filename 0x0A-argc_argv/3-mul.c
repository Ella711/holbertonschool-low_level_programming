#include "main.h"

/**
* main - prints it's name
* @argc: - arguement counter
* @argv: - pointer string
*Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = strtol(argv[1], NULL, 10);
		int y = strtol(argv[2], NULL, 10);
		int result;

		result = x * y;
		printf("%d\n", result);
	}
	return (0);
}

