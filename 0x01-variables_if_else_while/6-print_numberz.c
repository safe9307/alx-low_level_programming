#include <stdio.h>

/**
 * main - for all single numbers of base 10 from 0
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + '0');
	}
	putchar('\n');
	return (0);
}
