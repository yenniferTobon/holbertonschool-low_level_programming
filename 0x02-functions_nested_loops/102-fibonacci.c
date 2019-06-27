#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers
* Return: 0
*/
int main(void)
{
	long int num1 = 1, num2 = 2, res = 0;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		res = num1 + num2;
		printf("%ld", res);
		num1 = num2;
		num2 = res;
		if (i != 47)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
