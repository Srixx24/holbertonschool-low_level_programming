#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adding
 * @a: first value
 * @b: second value
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub
 *
 * @a: first value
 * @b: second value
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 *
 * @a: first value
 * @b: second value
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 *
 * @a: first value
 * @b: second value
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the
 * division of a by b
 *
 * @a: first value
 * @b: second value
 *
 * Return: result
 */

int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
