#include"main.h"

/**
 * _strncpy - copies a string
 * @dest: copied string
 * @src: string to copy
 * @n: maximun n bytes from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && src[len] != src[n])
	{
		dest[len] = src[len];
		len++;
		if (len == n)
			break;
	}
	return (dest);
}
