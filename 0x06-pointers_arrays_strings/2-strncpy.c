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

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	for ( ; len < n ; len++)
		dest[len] = '\0';
	return (dest);
}
