#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two arguments
 * @a: first argument
 * @b: Second argument
 * Return: sum of two arguments
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two arguments
 * @a: first int
 * @b: second int
 * Return: difference btw a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipiles two arguments
 * @a: first num
 * @b: second num
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two arguments
 * @a: first num
 * @b: second num
 * Return: result of dividing a & b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first num
 * @b: second num
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
