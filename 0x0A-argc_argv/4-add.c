#include <stdio.h>
#include <stdlib.h>

/**
 * main - function adds positive numbers
 * @argc: number arguments input
 * @argv: values arguments input
 * Return: int result of the add
 */

int main(int argc, char *argv[])
{
	int i = 1, suma = 0, num1 = 0, j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (**(argv + i) < 48 || **(argv + i) > 57)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		num1 = atoi(argv[i]);
		suma = suma + num1;
	}
	printf("%d\n", suma);
	return (suma);
}

