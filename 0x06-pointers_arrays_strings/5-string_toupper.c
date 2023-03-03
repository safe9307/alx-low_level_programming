#include"main.h"

/**
 * string_toupper - changes from lower to upper
 * @a: string entry
 * Return: string
 */

char *string_toupper(char *a)
{
	int len = 0, temp;

	while (a[len] != '\0')
	{
		if (a[len] >= 65 && a[len] <= 90)
			a[len] = a[len] + 32;
	}
	return (a);
}
