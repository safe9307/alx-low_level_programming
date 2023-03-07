#include"main.h"
#include <stdio.h>

/**
 * _strchr - locates a charachter in a string
 * @s: source string
 * @c: character to locate
 * Return: pointer to 1st occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int len = 0;

	for (len = 0 ; (s[len] != '\0') && s[len] != c; len++)
	{
		if (s[len] == c)
			return (s + len);
	}
	return (NULL);
}
