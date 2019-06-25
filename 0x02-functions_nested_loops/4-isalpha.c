#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: letter to be checked
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int tipoLetra = 0;

	tipoLetra = isalpha(c);

	if (tipoLetra == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
