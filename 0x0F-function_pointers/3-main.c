#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: kkk
 * @argv: ooo
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if (((strcmp(argv[2], "+") != 0) &&
	(strcmp(argv[2], "-") != 0) &&
	(strcmp(argv[2], "*") != 0) &&
	(strcmp(argv[2], "/") != 0) &&
	(strcmp(argv[2], "%") != 0)))
	{
		printf("%s\n", "Error");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (((strcmp(argv[2], "/") == 0) ||
	(strcmp(argv[2], "%") == 0)) &&
	(num2 == 0))
	{
		printf("%s\n", "Error");
		exit(100);
	}
	result = ((get_op_func(argv[2]))(num1, num2));
	printf("%d\n", result);
	return (0);
}
