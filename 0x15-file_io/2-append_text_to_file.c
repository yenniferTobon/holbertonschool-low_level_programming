#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name file
 * @text_content: texto
 * Return: int -1 id fails
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int int_open, int_write, size = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	int_open = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		close(int_open);
		return (1);
	}
	if (int_open == -1)
	{
		return (-1);
	}

	while (*(text_content + size) != '\0')
	{
		size++;
	}
	int_write = write(int_open, text_content, size);

	if (int_write == -1)
	{
		close(int_open);
		return (-1);
	}
	close(int_open);
	return (1);
}
