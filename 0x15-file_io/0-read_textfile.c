#include "main.h"
#include <stddef.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numr, numw;
	char *p;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	if (p == NULL)
	{
		close(fd);
		return (0);
	}
	numr = read(fd, p, letters);
	close(fd);
	if (numr == -1)
	{
		free(p);
		return (0);
	}
	numw = write(STDOUT_FILENO, p, numr);
	free(p);
	if (numr != numw)
		return (0);
	return (numw);
}
