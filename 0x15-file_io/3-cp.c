#include "main.h"

/**
 * _exit_ - prints correct exit error msg
 * @error: exit/error number
 * @s: name of file
 * @fd: file descriptor
 * Return: 0.
 */

int _exit_(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copies one file into another
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 1 if successful, -1 if not.
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, rfd, wfd;
	char *buffer[1024];

	if (argc != 3)
		_exit_(97, NULL, 0);

	/* open file_to and trunc if it already exists */
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		_exit_(99, argv[2], 0);

	/* opens file that's being copied from */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		_exit_(98, argv[1], 0);

	/*transfer data until end of input or error */
	while ((rfd = read(fd_from, buffer, 1024)) != 0)
	{
		if (rfd == -1)
			_exit_(98, argv[1], 0);

		wfd = write(fd_to, buffer, rfd);
		if (wfd == -1)
			_exit_(99, argv[2], 0);
	}

	if (close(fd_from) == -1)
		_exit_(100, NULL, fd_from);
	else
		close(fd_from);
	if (close(fd_to) == -1)
		_exit_(100, NULL, fd_to);
	else
		close(fd_to);
	return (0);
}

