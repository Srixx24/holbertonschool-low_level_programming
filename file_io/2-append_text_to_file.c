#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: 1 0r -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bw;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY |O_APPEND);

	if (file == -1)
		return (-1);

	bw = write(file, text_content, strlen(text_content));

	if (bw == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
