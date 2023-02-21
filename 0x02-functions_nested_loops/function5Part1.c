#include"main.h"

/**
 * define 5 functions
 */

void print_alphabets_lower_case(void)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
		putchar (tolower(n));
	putchar('\n');
}

