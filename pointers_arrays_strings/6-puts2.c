#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line
 *
 * @str:
 *
 * Return: 0
 */
void puts2(char *str)
{
	int x, y;

	for (y = 0; str[x]; x++)

	for (y = 0; x > y; x = 2)
		putchar(str[x]);
	putchar('\n');
}
