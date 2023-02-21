#include<stdio.h>
#include<string.h>
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

	for (n = 0 ; n <= strlen(s); n++)
	{
		putchar (s[n]);
	}
	putchar ('\n');
	return (0);
}
