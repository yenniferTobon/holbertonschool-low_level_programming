#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
