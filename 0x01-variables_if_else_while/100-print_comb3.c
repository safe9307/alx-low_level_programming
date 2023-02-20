#include <stdio.h>

/**
 * main - for all single digit numbers
 * it goes through for combinations of two digits
 * print only the smallest, between 01,10 we take 01
 * the two digits must be different
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 8; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (m > n)
			{
				putchar(n +48);
				putchar(m + 48);
				if (n == 8 && m == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
