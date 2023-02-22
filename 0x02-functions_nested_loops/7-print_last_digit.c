#include"main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number entry
 * it executes, and prints it
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = _abs (n);
	return ( n % 10 + 48);
}
