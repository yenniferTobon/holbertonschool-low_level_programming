#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints Holberton followed by a new line
 * Return: 0
 */

int main(void)
{
	char palabra[9] = "Holberton";
	int i = 0;

	for (i = 0; i < 9 ; i++)
	{
		_putchar(palabra[i]);
	}
	_putchar('\n');
	return (0);
}
