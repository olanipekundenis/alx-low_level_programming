#include "main.h"

/**
 * append_text_to_file - it appends text at the rare of a file
 * @fileN: represents the pointer that points to the name of the file
 * @txt_content: This represent the string to be added to the end of the file
 *
 * Return: returns -1 if fileN is NULL or lacks permission else returns 1
 */
int append_text_to_file(const char *fileN, char *txt_content)
{
	int o, w, len = 0;

	if (fileN == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	o = open(fileN, O_WRONLY | O_APPEND);
	w = write(o, txt_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
