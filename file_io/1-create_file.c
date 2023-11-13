#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bw;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

	if (file == -1)
		return (-1);
	bw = write(file, text_content);

	if (bw == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
