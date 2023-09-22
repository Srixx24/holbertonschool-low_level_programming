#include <stdio.h>
/**
 * main - printing alphabet backward with putchar function
 *
 * Discription - using putchar fuction to print all
 * lowercase alphabet backwards
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{

		putchar (ch);

	}
		putchar ('\n');

	return (0);
}

