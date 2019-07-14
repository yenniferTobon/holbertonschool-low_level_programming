#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: number arguments input
 * @argv: values arguments input
 * Return: int result of the multiplication
 */

int main(int argc, char *argv[])
{
	int mult = 0, num1 = 0, num2 = 0;

	if (argc < 2 || argv[2] == '\0' || argv[1] == '\0')
	{
		puts("Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = (num1 * num2);
	printf("%d\n", mult);
	return (1);
}
