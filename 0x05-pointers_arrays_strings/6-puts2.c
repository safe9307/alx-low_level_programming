#include"main.h"

/**
 * puts2 - prints every other character of a string,followed by a new line.
 * @str: string variable of pointer *str
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
