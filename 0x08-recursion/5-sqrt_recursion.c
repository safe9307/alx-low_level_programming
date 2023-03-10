#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to look for its square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_mid(0, n, n));
}

/**
 * _sqrt_recursion_mid - returns the natural square root using mid method
 * @n: number to look for its square root
 * @start: start of range
 * @end: end of range
 * Return: square root of n
 */

int _sqrt_recursion_mid(int start, int end, int n)
{
	int mid = (start + end) / 2;

	if ((mid * mid <= n) && ((mid + 1) * (mid + 1) > n))
	{
		if (mid * mid == n)
			return (mid);
		else
			return (-1);
	}
	if (mid * mid < n)
		return (_sqrt_recursion_mid(mid + 1, end, n));
	else
		return (_sqrt_recursion_mid(start, mid - 1, n));
}
