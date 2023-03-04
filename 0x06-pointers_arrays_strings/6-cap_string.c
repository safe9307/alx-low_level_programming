#include"main.h"

/**
 * cap_string - changes from lower to upper
 * @s: string entry
 * Return: string
 */

char *cap_string(char *s)
{
	int len = 0, i;
	char p[13] = {' ', '\t', '\n', ',', ';', '.', '(', ')', '!', '?', '"', '{', '}'};

	while (s[len] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[len] == p[i] && s[len + 1] <= 122 && s[len + 1] >= 97)
			{
				s[len + 1] -= 32;
				break;
			}
		}
		len++;
	}
	return (s);
}
