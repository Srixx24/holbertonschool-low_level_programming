#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int total = 0;
	int num;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			char *arg = argv[x];

			for (y = 0; arg[y] != '\0'; y++)
			{
				if (!isdigit(arg[y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(arg);
			total += num;
		}
	}

	printf("%d\n", total);
	return (0);
}
