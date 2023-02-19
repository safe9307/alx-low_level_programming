#include <stdio.h>
#include <ctype.h>

/**
 * prints the alphabet in a lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
		putchar (tolower(n));
	return (0);
}
