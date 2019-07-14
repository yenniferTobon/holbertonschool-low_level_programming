#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign, num, brk;

	num = 0;
	brk = 0;
	sign = -1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 - (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
		i++;
	}
	num *= sign;
	return (num);
}
