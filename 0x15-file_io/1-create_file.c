#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - Create a function that creates a file
 * @filename: name file
 * @text_content: texto
 * Return: int -1 id fails
 **/

int create_file(const char *filename, char *text_content)
{
	int int_open, int_write, size = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	int_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
		write(1, "fails", 6);
		return (-1);
	}
	close(int_open);
	return (1);
}
