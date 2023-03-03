#include"main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0, diff = 0;

	while (s1[len] != '\0' || s2[len] != '\0')
	{
		if (s1[len] != s2[len])
		{
			diff = s1[len] - s2[len];
			break;
		}
		len++;
	}
	return (diff);
}
