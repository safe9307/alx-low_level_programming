#include"main.h"

/**
 * reverse_array - reverse the content of an integer array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp, half_a_len;

	if (n % 2 != 0)
		half_a_len = (n - 1) / 2;
	else
		half_a_len = n / 2;
	for (i = 0; i <= half_a_len; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
