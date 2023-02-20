#include <stdio.h>
#include <ctype.h>

/**
 * main - for all numbers of base 16
 * it goes through
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9; n++)
		putchar(tolower(n) + 48);
	for (n = 'A'; n <= 'F'; n++)
		putchar(tolower(n));
	putchar('\n');
	return (0);
}
