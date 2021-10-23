#include "main.h"

/**
* main - prints it's name
* @argc: - arguement counter
* @argv: - pointer string
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		if (isdigit(*argv[i]))
		{
			sum += strtol(argv[i], NULL, 10);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

