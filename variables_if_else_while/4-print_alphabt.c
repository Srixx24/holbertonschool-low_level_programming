#include <stdio.h>
/**
 * main - printing alphabet with putchar function
 *
 *Discription - using putchar fuction to print all
 *alphabet except q and e
 *
 *Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'q' && 'e' )
	{
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
