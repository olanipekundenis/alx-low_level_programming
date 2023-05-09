#include "main.h"

/**
 * create_file - use to creates a file
 * @fileN: A pointer to the name of the file to create
 * @txt_content: A pointer to a string to write to the file
 *
 * Return: returns -1 if the function fails and returns 1 if function pass
 */
int create_file(const char *fileN, char *txt_content)
{
	int fd, w, len = 0;

	if (fileN == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	fd = open(fileN, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, txt_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
