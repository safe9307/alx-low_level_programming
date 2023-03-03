#include"main.h"

/**
 * string_toupper - changes from lower to upper
 * @a: string entry
 * Return: string
 */

char *string_toupper(char *a)
{
	int len = 0;

	while (a[len] != '\0')
	{
		if (a[len] >= 97 && a[len] <= 122)
			a[len] = a[len] - 32;
	}
	return (a);
}
