#include <stdio.h>
#include <stdlib.h>
/**
 * main - function adds positive numbers
 * @argc: number arguments input
 * @argv: values arguments input
 * Return: int result of the add
 */

int main(int argc, char* argv[])
{
	int i = 1, suma = 0, num1 = 0;

	if (argc < 2 || argv[1] == '\0')
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i <= (argc - 1))
	{
		if (**(argv +i) < 48 || **(argv + i) > 57)
		{
			printf("%s\n", "Error");
			return (0);
		}
		else
		{
			num1 = atoi(argv[i]);
			suma = suma + num1;
		}
		i++;
	}
	printf("%d\n", suma);
	return (0);
}

