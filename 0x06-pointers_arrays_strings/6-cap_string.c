#include"main.h"

/**
 * cap_string - changes from lower to upper
 * @s: string entry
 * Return: string
 */

char *cap_string(char *s)
{
	int len = 1, i;
	char p[13] = {' ', '\t', '\n', ',', ';', '.', '(', ')', '!', '?', '"', '{',
'}'};

	if (s[0] <= 122 && s[0] >= 97)
		s[0] -= 32;
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
