#include <stdio.h>

/**
 * main - function that of prints its name
 * @argc: nothing
 * @argv: char name
 * Return: int 0 is success exit
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
