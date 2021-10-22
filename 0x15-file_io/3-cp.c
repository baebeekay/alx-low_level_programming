#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, numR, numW;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, PERM);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		numR = read(file_from, buf, BUFSIZE);
		if (numR <= 0)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			break;
		}
		numW = write(file_to, buf, numR);
		if (numW <= 0)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			break;
		};
	} while (numR == BUFSIZE);
	if (close(file_from) || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
