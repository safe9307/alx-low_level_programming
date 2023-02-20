#include <stdio.h>
#include <ctype.h>

/**
 * main - for all alphabets in reverse go through
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(tolower(n));
		n--;
	}
	putchar('\n');
	return (0);
}
