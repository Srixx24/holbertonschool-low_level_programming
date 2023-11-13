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
	FILE *file = popen;

	if (filename == NULL)
	{
		return (0);
	}

	*file = popen("filename", "r");
	
	if (file == NULL)
	{
		return (0);
	}

	fclose(file);
	return (0);

}
