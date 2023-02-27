#include"main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string variable of pointer *str
 * Return: no return
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
