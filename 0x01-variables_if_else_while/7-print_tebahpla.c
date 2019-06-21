#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return (0);
 */

int main(void)
{
	int i = 0;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
