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

/**
 * funIsPalim - Checks characters of palindrome.
 * @s: String to check.
 * @size: Size of string.
 * @c: Index.
 * Return: int 1 if palindrome, 0 if not.
 */

int funIsPalim(char *s, int size, int c)
{
	if (c >= size / 2)
		return (1);
	else if (s[c] == s[size - c - 1])
		return (funIsPalim(s, size, c + 1));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: String to check.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);
	int c = 0;

	return (funIsPalim(s, size, c));
}

