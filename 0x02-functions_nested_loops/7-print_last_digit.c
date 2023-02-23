#include"main.h"
#include"6-abs.c"

/**
 * print_last_digit - print last digit of a number
 * @n: number entry
 * it executes, and prints it
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	last_digit = _abs(last_digit);
	_putchar(last_digit + '0');
	return (last_digit);
}
