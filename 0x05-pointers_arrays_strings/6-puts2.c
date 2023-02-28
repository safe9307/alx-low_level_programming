#include"main.h"
#include"2-strlen.c"

/**
 * puts2 - prints every other character of a string,followed by a new line.
 * @str: string variable of pointer *str
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0, len = _strlen(str) - 1;

	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
