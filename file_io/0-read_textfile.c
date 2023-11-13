#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
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
	int file;
	char *data;
	ssize_t br;
	ssize_t bw;

	if (filename == NULL)
		return (0);

	data = malloc(letters * sizeof(char));
	if (data == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	br = read(file, data, letters);

	if (br < 0)
	{
		close(file);
		return (0);
	}

	bw = write(STDOUT_FILENO, data, br);
	close(file);

	return (bw);

}
