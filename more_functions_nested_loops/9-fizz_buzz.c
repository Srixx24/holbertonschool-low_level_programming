#include <stdio.h>
/**
 * main - Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print
 * FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x / 3)
		{
			printf("Fizz");
		}
		else (x / 5)
		{
			printf("Buzz");
		}
		else if (x / 3 && x / 5)
		{
			printf("FizzBuzz");
		}
		printf("\n");
	}
	return (0);
}
