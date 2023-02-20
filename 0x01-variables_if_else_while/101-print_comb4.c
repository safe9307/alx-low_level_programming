#include <stdio.h>

/**
 * main - for all single digit numbers
 * it goes through for combinations of three digits
 * print only the smallest between 012,120,102,021,210 we take 012
 * the three digits must be different
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, e;

	for (n = 0; n <= 7; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			for (e = 0; e <= 9; e++)
			{
				if (m > n && e > m)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(e + 48);
					if (n == 7 && m == 8 && e == 9)
						break;
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
