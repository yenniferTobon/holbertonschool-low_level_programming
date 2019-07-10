#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: array char
 * Return: suma
 */

int _strlen_recursion(char *s)
{
	int suma = 0;

	if (*s != '\0')
	{
	suma = 1 + _strlen_recursion(s + 1);
	}
	return (suma);
}
