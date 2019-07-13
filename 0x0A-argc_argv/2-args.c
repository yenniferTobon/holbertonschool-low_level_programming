#include <stdio.h>

/**
 * main - function that of prints its name
 * @argc: nothing
 * @argv: char name
 * Return: int 0 is success exit
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[i] != '\0')
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
