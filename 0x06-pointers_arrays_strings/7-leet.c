#include "holberton.h"

/**
 * *leet - encodes a string
 * @a: input chat
 * Return: char
 */

char *leet(char *)
{
	int i = 0, j = 0;

	char matrix[][] = {{ 'a' , 'A' },
			{ 'e' , 'E' },
			{ 'o' , 'O' },
			{ 't' , 'T' },
			{ 'l' , 'L' }};
	int vector[5] = { '4' , '3' , '0' , '7' , '1' };

	while (s[i] != 0)
	{
		char texto = s[i];

		for (j = 0; j < 5; j++)
		{
			if (texto == matrix[j][0] || texto == matrix[j][1])
			{
				s[i] = texto[i];
			}
		}
		i = i + 1;
	}
	return (s);
}
