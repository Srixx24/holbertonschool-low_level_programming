#include <stdio.h>
/**
 * main - putchar function used to print letters
 *
 * description - printing aplabet upper and
 * lowercase with putchar function.
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar ('\n');

	return (0);
}
