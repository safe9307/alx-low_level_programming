#include"main.h"

/**
 * _memset - fills the first n bytes of s by constant byte b
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: fist n byte of s
 * Return:returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}
