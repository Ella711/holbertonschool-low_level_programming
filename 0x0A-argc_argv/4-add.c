#include "main.h"

/**
 * isnum - return 1 if string is a number else 0
 * @string: string to be evaluated
 * Return: success or failure
 */

int isnum(char *string)
{
	int j = 0;

	for (j = 0; string[j]; j++)
	{
		if (string[j] == '-')
		{
			j++;
		}
		if (!isdigit(string[j]))
		{
			return (0);
		}
	}
	return (1);
}


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

		if (isnum(argv[i]) != 0)
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

