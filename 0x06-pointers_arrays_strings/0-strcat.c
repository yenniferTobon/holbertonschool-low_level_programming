#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: char dest
 * @src: char a appends
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int tamano = 0, l = 0, tamanoFinal = 0;

	while (*(dest + tamano) != '\0')
	{
		tamano = tamano + 1;
	}

	for (l = 0; src[l] != '\0'; l++)
	{
		*(dest + tamano) = *(src + l);
		tamano = tamano + 1;
	}

	 while (*(dest + tamanoFinal) != '\0')
        {
                tamanoFinal = tamanoFinal + 1;
        }

	*(dest + tamanoFinal) = '\0';
	return (dest);
}
