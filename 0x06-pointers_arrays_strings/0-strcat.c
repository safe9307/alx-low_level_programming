#include"main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: string appended to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	return (dest);
}
