#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @a: char in lowercase
 * Return: char
 */

char *cap_string(char *a)
{
	int tamano = 0, i = 0, j = 0;
	int vector[13] = {9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 125, 123, 32};

	while (*(a + tamano) != '\0')
	{
		tamano = tamano + 1;
	}


	for (i = 0; i < tamano; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (*(a + i) == vector[j])
			{
				int i2 = i + 1;

				if ((*(a + i2) >= 65 && *(a + i2) <= 90) || (*(a + i2) >= 97 && *(a + i2) <= 122))
				{
					if (*(a + i2) >= 97 && *(a + i2) <= 122)
					{
						*(a + i2) = *(a + i2) - 32;
					}
				}
			}
		}
	}
	return (a);
}
