#include"main.h"

/**
 * main - prints a string
 * it execute it, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";

	unsigned int long n;

	for (n = 0 ; n < strlen(s); n++)
	{
		_putchar (s[n]);
	}
	_putchar ('\n');
	return (0);
}
