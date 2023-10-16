#include <stdio.h>
/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x1 = 0, x2 = 0;

	if (argc != 3)
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		x1 * x2;
		
		else 
		{
			printf ("Error\n");
			return (1);
		}
	}


	return (0);
}
