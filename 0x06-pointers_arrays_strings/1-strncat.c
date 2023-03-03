#include"main.h"

/**
 * _strncat - concatenates two strings at max of n bytes from src
 * @dest: first string
 * @src: string appended to dest
 * @n: maximun n bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != src[n])
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	return (dest);
}
