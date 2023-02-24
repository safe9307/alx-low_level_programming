#include"main.h"

/**
 * _isupper - checks if entry is digit or not
 * @c: entry character
 * Return: 1 if c is digit 0 if not
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
