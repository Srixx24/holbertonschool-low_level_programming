#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if loop fuction is printing variables based on n's value
 *
 * Description: printing variables based on n's value
 * with an if / if else loop function
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("98 is positive\n");
	} else if (n < 0)
	{
		printf("-98 is negative\n");
	} else
	{
		printf("0 is zero\n");
	}

	return (0);
}
