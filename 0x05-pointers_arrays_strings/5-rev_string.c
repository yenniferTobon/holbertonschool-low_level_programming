#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: input string reverse
 */

void rev_string(char *s)
{
	int tamano = 0,  aux = 0;

	while (s[tamano] != '\0')
	{
		tamano = tamano + 1;
	}

	while (aux <= tamano - 1)
	{
		char text1 = s[aux];
		char text2 = s[tamano - 1];

		s[aux] = text2;
		s[tamano - 1] = text1;
		aux = aux + 1;
		tamano = tamano - 1;
	}

}
