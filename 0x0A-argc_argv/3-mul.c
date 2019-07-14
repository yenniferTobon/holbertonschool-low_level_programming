#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers
 * @argc: number arguments input
 * @argv: values arguments input
 * Return: int result of the multiplication
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int mult = 0, num1 = 0, num2 = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = (num1 * num2);
	printf("%d\n", mult);
	return (1);
}
