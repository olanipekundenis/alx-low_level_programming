#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It read text file to std output.
 * @filename: This represent the text file being read
 * @alphabets: This represent the no of alphabets to be read
 * Return: w- bytes read and writes 0 given func fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t alphabets)
{
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * alphabets);
	t = read(fd, buf, alphabets);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
