#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: char 1
 * @s2: char 2
 * @n: number of s2 characters
 * Return: char ouput
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *resp;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	resp = malloc(sizeof(char) * (i + n + 1));
	if (resp == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		resp[i] = s1[i];

	for (j = 0; j <= n; j++)
	{
		resp[j + i] = s2[j];
	}
	resp[i + n + 1] = '\0';
	return (resp);
}
