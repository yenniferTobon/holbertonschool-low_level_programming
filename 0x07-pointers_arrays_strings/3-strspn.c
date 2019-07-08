#include "holberton.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: array s
 * @accept: char to input
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cantidad = 0;
	int i = 0;

	while (*s != '\0')
	{
		int f = 0;

		for (i = 0; *(accept + i) != '\0'; i++)
		{

			if (*(accept + i) == *(s + cantidad))
			{
				cantidad = cantidad + 1;
				f = 1;
				break;
			}
		}
		if (f != 1)
		{
			break;
		}
	}
	return (cantidad);
}
