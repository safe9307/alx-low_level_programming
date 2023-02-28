#include"main.h"
#include<stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: string variable of pointer *a
 * @n: the number of elements of a
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	_putchar('\n');
}
