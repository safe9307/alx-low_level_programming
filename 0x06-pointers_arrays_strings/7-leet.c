#include"main.h"

/**
 * leet - encodes a string into 1337
 * @s: string entry
 * Return: string
 */

char *leet(char *s)
{
	int len = 0, i;
	int a[8] = {97, 101, 111, 116, 108, 4, 3, 0, 7, 1};

	while (s[len] != '\0')
	{
		for (i = 0; i < 8; i++)
		{
			if (s[len] == a[i] || s[len] == a[i] - 32)
				s[len] = a[i + 4];
		}
		len++;
	}
	return (s);
}
