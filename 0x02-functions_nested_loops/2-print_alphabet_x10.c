#include"main.h"
#include"1-alphabet.c"

/**
 * print_alphabet_x10 - for each alphabet it turns it to a lower case 10 times
 * it executes, and prints it
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		print_alphabet();
}
