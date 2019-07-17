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
	char *resp;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	resp = malloc(i + j + 1);
	if (resp == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		resp[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		resp[i + j] = s2[j];
	}
	resp[i + j] = '\0';
	return (resp);
}
