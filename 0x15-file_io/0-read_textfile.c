#include "main.h"

/**
 * read_textfile - reads and prints text from a file
 * @filename: name of file to be read/printed
 * @letters: number of letters to be read
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ffd, rfd, wfd;
	size_t length = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	ffd = open(filename, O_RDONLY);
	if (ffd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rfd = read(ffd, buffer, letters);
	if (rfd == -1)
		return (0);

	for (; buffer[length] != 0; length++)
		;

	wfd = write(0, buffer, length);
	if (wfd == -1)
		return (0);

	/*
	 * if (letters > length)
	*	length++;
	*/

	close(ffd);
	free(buffer);
	return (length);
}

