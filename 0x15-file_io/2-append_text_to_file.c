#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 (success) and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t numW;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if ((text_content == NULL) && (fd != -1))
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	numW = write(fd, text_content, i);

	if (numW == -1 || numW != i)
		return (-1);

	return (1);
}
