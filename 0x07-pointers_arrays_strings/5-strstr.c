#include "holberton.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: char that locates
 * @needle: cat input
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		int i = 0;

		while (*(haystack + i) != '\0')
		{
			if (*(needle) == *(haystack + i))
			{
				return (needle);
			}
			i++;
		}
		needle++;
	}
	if (*needle == *haystack)
		return ('\0');

	return ('\0');
}
