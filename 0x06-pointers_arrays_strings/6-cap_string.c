#include"main.h"

/**
 * cap_string - capitalize all words in a string
 * @s: string entry
 * Return: string
 */

char *cap_string(char *s)
{
	int len = 0;

	while (a[len] != '\0')
	{
		if (a[len] >= 97 && a[len] <= 122)
			a[len] = a[len] - 32;
		len++;
	}
	return (a);
}
