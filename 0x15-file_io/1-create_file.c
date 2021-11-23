#include "main.h"

/**
* _strlen - returns length of string
*@s: a string
*Return: i
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
 * create_file - creates and truncates already created file
 * @filename: name of file to be read/printed
 * @text_content: content of file
 * Return: 1 if successful, -1 if not.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wfd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wfd = write(fd, text_content, _strlen(text_content));
	if (wfd == -1)
		return (-1);

	return (1);
}

