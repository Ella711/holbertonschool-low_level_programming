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
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 if successful, -1 if not.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wfd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wfd = write(fd, text_content, _strlen(text_content));
	if (wfd == -1)
		return (-1);

	return (1);
}

