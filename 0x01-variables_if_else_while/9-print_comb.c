#include <stdio.h>

/**
 * main - for all single digit numbers
 * it goes through
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if( n == '9')
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
