#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: array s
 * @c: number of search
 * Return: char
 */

char *_strchr(char *s, char c)
{
	for (; s[0] != '\0'; s++)
	{
		if (*s == c)
		{
			break;
		}
	}
	return (s);
}
