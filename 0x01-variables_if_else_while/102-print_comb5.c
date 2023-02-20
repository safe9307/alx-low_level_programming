#include <stdio.h>

/**
 * main - for all two digit numbers
 * it goes through for combinations for all possible cominations
 * it executes, and prints it 'nm ef'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, m = 0, e = 0, f = 1;

	while (n <= 9)
	{
		while (m <= 9)
		{
			while (e <= 9)
			{
				while (f <= 9)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(' ');
					putchar(e + 48);
					putchar(f + 48);
					putchar(',');
					putchar(' ');
					f++;
				}
				f = 0;
				e++;
			}
			m++;
			e = 0;
			f = m + 1;
		}
		e = 0;
		f = 0;
		m = 0;
		n++;
	}
	putchar('\n');
	return (0);
}
