#include"main.h"
#include"2-strlen.c"

/**
 * _strcpy - copy a string to a buffer
 * @src: string to copy
 * @dest: buffer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len_of_src = _strlen(*src);

	while (i < len_of_src)
	{
		dest[i] == src[i];
		i++;
	}
	return (*dest);
}
