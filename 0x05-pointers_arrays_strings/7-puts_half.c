#include"main.h"
#include"2-strlen.c"

/**
 * puts_half - prints the 2nd half of a string,followed by a new line.
 * @str: string variable of pointer *str
 * Return: no return
 */

void puts_half(char *str)
{
	int i, len = _strlen(str) - 1;

	if (_strlen(str) % 2 != 0)
		i = len / 2;
	else
		i = (_strlen(str) / 2) + 1;
	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
