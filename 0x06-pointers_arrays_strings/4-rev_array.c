#include"main.h"

/**
 * reverse_array - reverse the content of an integer array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int len = 0, temp;

	while (len < n / 2)
	{
		temp = a[len];
		a[len] = a[n - 1 - len];
		a[n - 1 - len] = temp;
	}
}
