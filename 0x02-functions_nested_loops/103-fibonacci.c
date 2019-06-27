#include <stdio.h>

/**
* main - Fibonacci not exceed 4,000,000
* Return: 0
*/

int main(void)
{
	long int num1 = 1, num2 = 2, res = 0, sum = 2;

	while (1)
	{
		res = num1 + num2;
		if (res > 4000000)
			break;
		if (res % 2 == 0)
			sum += res;
		num1 = num2;
		num2 = res;
	}
	printf("%ld\n", sum);
	return (0);
}
