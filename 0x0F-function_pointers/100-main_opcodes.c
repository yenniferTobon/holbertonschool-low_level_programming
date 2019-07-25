#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: argument count
 * @argv: argument values vector.
 * Return: 0 on succes.
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	int valor;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	valor = atoi(argv[1]);

	if (valor < 0)
	{
	printf("Error\n");
	exit(2);
	}



	return (0);

}
