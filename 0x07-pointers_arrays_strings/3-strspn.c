#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: substring
 * Return: num of bytes in s wich consist only of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_len = 0, a_len = 0;

	while (s[s_len] != '\0')
	{
		while (accept[a_len] != '\0')
		{
			if (accept[a_len] == s[s_len])
				break;
			a_len++;
		}
		if (accept[a_len] == '\0')
			return (s_len);
		a_len = 0;
		s_len++;
	}
	return ('\0');
}
