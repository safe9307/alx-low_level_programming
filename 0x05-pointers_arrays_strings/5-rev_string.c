#include"main.h"
#include"2-strlen.c"
#include"1-swap.c"

/**
 * rev_string - reverse a string, followed by a new line to stdout
 * @s: string variable of pointer *s
 * Return: no return
 */

void rev_string(char *s)
{
	int i, len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		swap_int(s[i], s[i - len + 1]);
}
