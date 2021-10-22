#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

void _close(int file);
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
	do
	{
		numR = read(file_from, buf, BUFSIZE);
		if (numR == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
		numW = write(file_to, buf, BUFSIZE);
		if (numW == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	while (numR == BUFSIZE);
		_close(file_from);
		_close(file_to);

		return (0);
}

/**
 * _close - closes a file
 * @file: file to close
 */
void _close(int file)
{
	int err;

	err = close(file);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file);
		exit(100);
	}
}
