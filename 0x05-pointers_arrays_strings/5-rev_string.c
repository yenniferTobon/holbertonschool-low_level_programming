#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: char input to reverse
 */

void rev_string(char *s)
{
	int i = 0, tamano = 0, j = 0;
	char *copia;

	while (i != -1)
	{
		if (*(s + i) != '\0')
			*(copia + i) = *(s + i);
			tamano = tamano + 1;
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}
	for (i = tamano - 1; i >= 0; i--)
	{
		*(s + i) = *(copia + j);
		j = j + 1;
	}

}
