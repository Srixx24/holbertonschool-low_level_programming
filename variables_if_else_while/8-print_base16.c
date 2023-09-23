#include <stdio.h>
/**
 * main -Write a program that prints all the
 * numbers of base 16 in lowercase, followed
 * by a new line with the putchar fuction x3
 *
 * Return: 0
 */
int main(void)
{
        char num;

        for (num = '0'; num <= '9'; num++)
	        {

		putchar (num);

		}
	
	char let;

	for (let = 'a'; let <= 'f'; let++)
		{

		putchar (let);

		}

        putchar ('\n');

        return (0);
}
