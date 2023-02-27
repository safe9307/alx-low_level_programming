#include"main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable of pointer *a
 * @b: variable of pointer *b
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
