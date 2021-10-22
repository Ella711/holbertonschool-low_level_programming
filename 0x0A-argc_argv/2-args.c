#include "main.h"

/**
* main - prints it's name
* @argc: - arguement counter
* @argv: - pointer string
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

