#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int  i = 48;
	int  j = 48;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}

