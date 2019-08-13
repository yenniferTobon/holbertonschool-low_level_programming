#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name file
 * @letters: number letters
 * Return: ssize_t
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, int_read, int_write;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fd =  open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}
	int_read = read(fd, buff, letters);
	if (int_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	int_write = write(STDOUT_FILENO, buff, int_read);

	if (int_write == -1)
	{
		return (0);
	}
	free(buff);
	close(fd);

	return (int_read);
}

