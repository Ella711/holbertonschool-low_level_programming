#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* function that reads a text file and prints it */
ssize_t read_textfile(const char *filename, size_t letters);
/* function that creates a file */
int create_file(const char *filename, char *text_content);
/* function that appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_HEADER */

