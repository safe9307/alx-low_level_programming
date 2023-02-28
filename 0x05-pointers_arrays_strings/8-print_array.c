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
	int i = 0, sizeofa = sizeof(a) / sizeof(a[0]);

	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
	printf("n = %d, sizeOfa = %d", n, sizeofa);
}
