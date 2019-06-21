#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
