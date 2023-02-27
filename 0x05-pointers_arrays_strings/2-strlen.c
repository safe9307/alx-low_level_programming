#include"main.h"

/**
 * _strlen - gives the length of a string
 * @s: string variable of pointer *a
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length, counter = 0;

	while (s[counter] != '\0')
		counter++;
	length = counter + 1;
	return (length);
}
