#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - printing variables based on n's value
 *
 * Return: 0
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0);
	{
		printf("%n is positive\n")
	}
	else (n = 0);
	{
		printf("%n is zero\n");
	}
	else (n > 0);
	{
		printf("%n is negative\n");
	}

	return (0);
}
