#include "holberton.h"
#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100
 *Result: 0
 *Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (((i % 3) != 0) && ((i % 5) == 0))
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
