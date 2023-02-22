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
       
	last_digit = _abs (n) % 48;
	return (last_digit);
}
