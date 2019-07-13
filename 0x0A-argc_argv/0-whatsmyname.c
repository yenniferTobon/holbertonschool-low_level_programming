#include <stdio.h>

/**
 * main - function that of prints its name
 * @argc: nothing
 * @argv: char name
 * Return: int 0 is success exit
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
