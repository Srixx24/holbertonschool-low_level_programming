#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, followed
  * by a new line
  * @separator: separator
  * @n: numbers
  *
  * Return: 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int
