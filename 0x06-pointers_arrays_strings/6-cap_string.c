#include"main.h"

/**
 * string_toupper - changes from lower to upper
 * @a: string entry
 * Return: string
 */

char *string_toupper(char *a)
{
	int len = 0, i;
	int *p = {' ', '\t', '\n', ',', ';', '.', '(', ')', '!', '?', '"', '{', '}'};

	while (s[len] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[len] == p[i] && s[len + 1] <= 122 && s[len + 1] >= 97)
			{
				s[len + 1] - = 32;
				break;
			}
		}
		len++;
	}
	return (s);
}
