#include"main.h"

/**
 * _strpbrk - locates the 1st occurence in s of any byte in accept
 * @s: source string
 * @accept: substring
 * Return: string starting with 1st occurence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int s_len = 0, a_len = 0;
	int occurence = -1;

	while (s[s_len] != '\0')
	{
		while (accept[a_len] != '\0')
		{
			if (accept[a_len] == s[s_len])
			{
				occurence = 1;
				break;
			}
			a_len++;
		}
		if (occurence > 0)
			return (s + s_len);
		a_len = 0;
		s_len++;
	}
	return ('\0');
}
