#include <stdio.h>
#include <ctype.h>

/**
 * _putchar - prints charachter
 * print_alphabet - print alphabets in lower case
 * Return: no return
 */

int _putchar (int character);

void print_alphabet(void);

void print_alphabet(void)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
		putchar (tolower(n));
	putchar('\n');
}


