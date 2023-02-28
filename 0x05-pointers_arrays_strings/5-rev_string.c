#include"main.h"
#include"2-strlen.c"

/**
 * rev_string - reverse a string.
 * @s: string variable of pointer *s
 * Return: no return
 */

void rev_string(char *s)
{
	int i = 0, half_loop = _strlen(s) / 2, j = _strlen(s) - 1;
	char x;

	while (i < half_loop)
	{
		x = s[i];
		s[i] = s[j];
		s[j] = x;
		i++;
		j--;
	}
}
