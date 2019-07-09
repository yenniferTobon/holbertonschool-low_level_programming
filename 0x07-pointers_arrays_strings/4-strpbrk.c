#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: array s
 * @accept: char to input
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i = 0;

		while (*(accept + i) != '\0')
		{
			if (*(s) == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	if (*s == *accept)
		return (s);

	return ('\0');
}
