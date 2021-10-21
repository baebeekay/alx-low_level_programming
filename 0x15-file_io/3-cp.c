#include "main.h"

void error(char *s);
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
		error("Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error("Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}
	file_to = creat(argv[2], PERM);
	if (file_to == -1)
	{
		error("Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	while ((FD_VALUE = read(file_from, buf, BUFSIZE)) > 0)
		if (write(file_to, buf, FD_VALUE) != FD_VALUE)
			error("Can't close fd FD_VALUE");
	exit(100);
	close(file_from);
	close(file_to);

	return (0);
}
/**
 * error - prints an error string
 * @s: string to print
 */
void error(char *s)
{
	dprintf(STDERR_FILENO, s, "Error: ");
	dprintf(STDERR_FILENO, "\n");
	exit(1);
}
