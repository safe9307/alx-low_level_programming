#include"main.h"
#include"2-strlen.c"
#include<math.h>

/**
 * _atoi - convert a string to integer
 * @s: string to convert
 * Return: integer converted value
 */

int _atoi(char *s)
{
	int plus = 0, minus = 0, ten_seq = 0, int_of_s = 0, plus_minus_after_num = 1;
	int len_of_src = _strlen(s), i = 0, j = 0;
	char *reduced_s = '\0';

	while (i < len_of_src)
	{
		if (s[i] == '+' || s[i] == '-')
		{
			if (plus_minus_after_num == 0)
				break;
			reduced_s[i] = s[i];
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			ten_seq++;
			plus_minus_after_num = 0;
			reduced_s[i] = s[i];
		}
		i++;
	}
	if (ten_seq > 0)
	{
		for (j = 0; j < i; j++)
		{
			if (reduced_s[i] == '+')
				plus++;
			if (reduced_s[i] == '-')
				minus++;
			if (reduced_s[i] >= 48 && reduced_s[i] <= 57)
			{
				int_of_s = reduced_s[i] * pow(10, ten_seq - 1);
				ten_seq--;
			}
		}
		if (plus < minus)
		{
			minus = minus - plus;
			if (minus % 2 == 1)
				int_of_s = -int_of_s;
		}
	}
	return (int_of_s);
}
