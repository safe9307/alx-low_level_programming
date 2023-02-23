#include"main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: entry character
 * Return: 1 if c is uppercase 0 if not
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}
