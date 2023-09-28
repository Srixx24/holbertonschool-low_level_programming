#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int le = 0, in = 0;
	int temp;

	for (in = 0; s[in]; in++)
		le++;

	for (in = 0; in < le / 2; in++)
	{
		temp = s[le];
		s[le] = s[in];
		s[in] = temp;
	}
}
