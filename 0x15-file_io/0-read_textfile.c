#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: a - actual number of letters it could read and print
 * 0 whwn function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);
	return (a);
}
