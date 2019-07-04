#include "holberton.h"

/**
 * *_strncpy - concatenates two strings
 * @dest: char dest
 * @src: char a appends
 * @n: use n bytes to src
 * Return: char dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int tamanoDest = 0, l = 0, tamanoSrc = 0, i = 0;

	while (*(dest + tamanoDest) != '\0')
	{
		tamanoDest = tamanoDest + 1;
	}

	while (*(src + tamanoSrc) != '\0')
	{
		tamanoSrc = tamanoSrc + 1;
	}

	if (tamanoSrc <= n)
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = '\0';
		}
	}

	for (l = 0; src[l] != '\0'; l++)
	{
		if (l < n)
		{
			*(dest + l) = *(src + l);
		}
		else
			break;
	}
	return (dest);
}
