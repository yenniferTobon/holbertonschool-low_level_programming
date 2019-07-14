#include "holberton.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: char that locates
 * @needle: cat input
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, b;

	while (haystack[i] != '\0')
	{
		j = 0;
		b = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0'
			&& needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + b);
		}
		i = b + 1;
	}
	return ('\0');
}
