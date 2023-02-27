#include"main.h"
#include"2-strlen.c"

/**
 * rev_string - reverse a string, followed by a new line to stdout
 * @s: string variable of pointer *s
 * Return: no return
 */

void rev_string(char *s)
{
	int i, len = _strlen(s);
	char x;

	for (i = 0; i <= (len / 2); i++)
	{
		x = s[i];
		s[i] = s[i + len - 1];
		s[i + len - 1] = x;
	}
}
