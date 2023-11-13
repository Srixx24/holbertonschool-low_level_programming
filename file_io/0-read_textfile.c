#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: filename
 * @letters: letters
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	
	FILE *file = popen("filename", "r")
	
	if (file == NULL)
		return (0);

}
