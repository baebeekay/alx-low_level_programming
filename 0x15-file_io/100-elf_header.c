#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned char e_ident[EI_NIDENT];
	uint16_t      e_type;
	uint16_t      e_machine;
	uint32_t      e_version;
	ElfN_Addr     e_entry;
} ElfN_Ehdr;

/**
 * main - entry point
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("Error: not ELF file\n");
	exit(98);

	return (0);
}
