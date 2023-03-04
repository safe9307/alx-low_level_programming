#include"main.h"

/**
 * leet - encodes a string into 1337
 * @s: string entry
 * Return: string
 */

char *leet(char *s)
{
	int len = 0, i;
	int a[10] = {97, 101, 111, 116, 108, 52, 51, 48, 55, 49};

	while (s[len] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[len] == a[i] || s[len] == a[i] - 32)
				s[len] = a[i + 5];
		}
		len++;
	}
	return (s);
}
