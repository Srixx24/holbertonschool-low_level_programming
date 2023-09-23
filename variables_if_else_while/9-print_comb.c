#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * combinations of single-digit numbers separated
 * by , printed in ascending order with putchar
 * function x4
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{

		putchar(x + '0');
		if (x < 9)

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0); 
}
