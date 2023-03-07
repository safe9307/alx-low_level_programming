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

	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (s + len);
		len++;
	}
	return (NULL);
}
