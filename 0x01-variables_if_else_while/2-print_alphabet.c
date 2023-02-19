#include <stdio.h>
#include <ctype.h>

/**
 * main - for each alphabet it turns it to a lower case
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
		putchar (tolower(n));
	return (0);
}
