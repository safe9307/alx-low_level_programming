#include"main.h"

/**
 * _strstr - finds the 1st occurence of needle in haystack
 * @haystack: source string
 * @needle: substring
 * Return: pointer string starting with 1st occurence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int h_len = 0, n_len = 0;
	int occurence = -1;

	while (haystack[h_len] != '\0')
	{
		while (needle[n_len] != '\0')
		{
			if (needle[n_len] == haystack[h_len])
				occurence = h_len;
			else
				occurence = -1;
			n_len++;
		}
		if (occurence > 0)
			return (haystack + (h_len - n_len + 1));
		n_len = 0;
		h_len++;
	}
	return ('\0');
}
