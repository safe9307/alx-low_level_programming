#include <stdio.h>
#include <ctype.h>

/**
 * main - for each alphabet, it turns it to a lower case,
 * then in uppercase, except q and e
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (n != 'Q' && n != 'E')
			putchar (tolower(n));
	}
	putchar('\n');
	return (0);
}
