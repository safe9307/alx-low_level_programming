#include"main.h"

/**
 * reverse_array - reverse the content of an integer array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int len = 0;

	while (len < n)
	{
		a[len] = a[n - 1 - a];
		len++;
	}
}
