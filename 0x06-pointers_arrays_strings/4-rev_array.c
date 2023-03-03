#include"main.h"

/**
 * reverse_array - reverse the content of an integer array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp, half_a_len;

	if (n % 2 != 0)
		half_a_len = (n - 1 / 2) + 1;
	else
		half_a_len = n / 2;
	while (i < half_a_len)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
