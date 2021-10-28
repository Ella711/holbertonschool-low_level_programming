#include "main.h"

/**
* main - prints it's name
* @argc: - arguement counter
* @argv: - pointer string
*Return: 0
*/

int main(int argc, char *argv[])
{

	int n[5] = {25, 10, 5, 2, 1};
	int cents = 0, change = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (; n[i]; i++)
	{
		if (cents >= n[i])
		{
			if (cents % n[i] == 0)
			{
				change += cents / n[i];
				break;
			}
			else
				change += cents / n[i];
			cents = cents - ((cents / n[i]) * n[i]);
		}
		else
			continue;
	}
	printf("%d\n", change);

	return (0);
}

