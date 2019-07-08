#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: array s
 * @c: number of search
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s = s + 1;
	}

	return (s);
}
