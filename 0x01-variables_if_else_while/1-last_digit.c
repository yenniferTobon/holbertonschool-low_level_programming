#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - last digit greater 5 and less 6
 * Return: 0
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %i ", n);
	n = n % 10;
	if (n > 5)
	{
		printf("is %d and is greater than 5\n", n);
	}
	else if (last == 0)
	{
		printf("is %d and is 0\n", n, last);
	}
	else
	printf("is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
