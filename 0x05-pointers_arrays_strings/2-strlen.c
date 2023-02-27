#include"main.h"

/**
 * _strlen - gives the length of a string
 * @s: string variable of pointer *a
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
