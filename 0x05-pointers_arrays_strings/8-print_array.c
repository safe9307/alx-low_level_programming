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
	int i = 0, len_of_a = *(&a + 1) - a;

	if (n == len_of_a - 1)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[n - 1]);
	}
}
