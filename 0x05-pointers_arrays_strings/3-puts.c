#include"main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string variable of pointer *str
 * Return: no return
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[lenght]);
		length++;
	}
	_putchar('\n');
}
