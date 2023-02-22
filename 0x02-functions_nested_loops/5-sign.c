#include"main.h"

/**
 * print_sign - prints a sign of a number
 * @n: number entry
 * it executes, and prints it
 * Return: 1 if pos, 0 if null, -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
