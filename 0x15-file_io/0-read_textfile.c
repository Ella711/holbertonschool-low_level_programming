#include "main.h"

/**
 * read_textfile - reads and prints text from a file
 * @filename: name of file to be read/printed
 * @letters: number of letters to be read
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rfd, wfd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rfd = read(fd, buffer, letters);
	if (rfd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wfd = write(1, buffer, rfd);
	if (wfd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (rfd);
}

