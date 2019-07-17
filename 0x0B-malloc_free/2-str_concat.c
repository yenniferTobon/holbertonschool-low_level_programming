#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: array size 1
 * @s2: array size 2.1
 * Return: char p
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0, l = 0, sizes1 = 0, sizes2 = 0, sizeTotal = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";

	while (*(s1 + l) != '\0')
	{
		sizes1 = sizes1 + 1;
		l++;
	}
	l = 0;
	while (*(s2 + l) != '\0')
	{
		sizes2 = sizes2 + 1;
		l++;
	}
	l = 0;
	while (*(s2 + l) != '\0')
	{
		sizes2 = sizes2 + 1;
		l++;
	}

	sizeTotal = sizes1 + sizes2;
	p = malloc(sizeof(char) * sizeTotal + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(p + i) = *(s1 + i);
	for (i = 0; i < sizes2 - 1; i++)
		*(p + (i + sizes1)) = *(s2 + i);

	*(p + sizeTotal) = '\0';

	return (p);
}


