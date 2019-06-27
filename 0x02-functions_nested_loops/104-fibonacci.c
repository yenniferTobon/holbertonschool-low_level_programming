#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int num1 = 1, num2 = 2, res = 0, num3, num4, res2;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		if (i < 90)
		{
			res = num1 + num2;
			printf("%lu", res);
			num1 = num2;
			num2 = res;
		}
		else
		{
			if (i == 90)
			{
				num3 = num1 % 10000000000;
				num1 /= 10000000000;
				num4 = num2 % 10000000000;
				num2 /= 10000000000;
			}
			res = num1 + num2 + (num3 + num4) / 10000000000;
			res2 = (num3 + num4) % 10000000000;
			printf("%lu%lu", res, res2);
			num1 = num2;
			num2 = res;
			num3 = num4;
			num4 = res2;
		}
		if (i != 95)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
