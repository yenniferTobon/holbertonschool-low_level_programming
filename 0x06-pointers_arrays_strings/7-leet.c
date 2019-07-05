#include "holberton.h"

/**
 * *leet - encodes a string
 * @a: input chat
 * Return: char
 */

char *leet(char *a)
{
	int i = 0, j = 0;
	char texto[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numeros[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (a[i] == texto[j])
				a[i] = numeros[j];
		}
		i++;
	}

	return (a);
}
