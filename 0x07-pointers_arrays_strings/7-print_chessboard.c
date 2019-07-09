#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: size ofchessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int cont;
	int cont2;

	for (cont = 0; cont < 8; cont++)
	{
		for (cont2 = 0; cont2 < 8; cont2++)
		{
			_putchar(a[cont][cont2]);
		}
		_putchar('\n');
	}
}
