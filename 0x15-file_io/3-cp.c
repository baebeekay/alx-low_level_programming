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
	int file_to, file_from, FD_VALUE;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT, PERM);
	if (file_to == -1)
	{
		printf("Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((FD_VALUE = read(file_from, buf, BUFSIZE)) > 0)
	{
		if (write(file_to, buf, FD_VALUE) != FD_VALUE)
		{
			printf("Error\n");
			exit(100);
		}
	}

	close(file_from);
	close(file_to);

	return (0);
}
