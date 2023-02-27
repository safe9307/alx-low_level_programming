#include"main.h"
#include"2-strlen.c"

/**
 * print_rev - prints a string in reverse, followed by a new line to stdout
 * @s: string variable of pointer *s
 * Return: no return
 */

void print_rev(char *s)
{
	int i, len = _strlen(s);

	for (i = len - 1; i >= len; i--)
		_putchar(s[len]);
	_putchar('\n');
}
