#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: number int input
 * @s2:
 * Return:
 */

int _strcmp(char *s1, char *s2)
{
	int i= 0, diferencia = 0;

	for (i = 0; s2[i] != '\0'; i++)
	{
		if ((s1[i]) - (s2[i]) != 0)
		{
			diferencia = (s1[i]) - (s2[i]);
			break;
		}
	}
	return (diferencia);
}

