#include <stdio.h>
/**
 * main - program that prints all single digit
 * numbers of base 10 starting from 0
 *
 * discription -  program that prints all single digit
 * numbers of base 10 starting from 0 with new line
 * with putchar fuction
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++);
	{
	putchar (x);
	}
	putchar('\n');

	return (0);
}
