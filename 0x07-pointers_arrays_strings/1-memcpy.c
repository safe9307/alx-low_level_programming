#include"main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @src: source array
 * @dest: dest array
 * @n: fist n byte of src
 * Return:returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len = 0;

	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}
