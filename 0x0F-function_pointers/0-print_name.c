#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: function pointer
 * @name: character to prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		if (f)
		{
			(*f)(name);
		}
	}
}
