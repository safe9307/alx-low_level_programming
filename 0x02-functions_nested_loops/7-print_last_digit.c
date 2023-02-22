#include"main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number entry
 * it executes, and prints it
 * Return: last digit
 */
int print_last_digit(int n)
{
	int rest = n % 10;
	if (rest < 0)
		rest = -1 * rest
	_putchar('0' + rest );
	return (rest);
}
