#include"main.h"

/**
 * _isalpha - for each alphabet checks if it to a lower case
 * @c: character entry
 * it executes, and prints it
 * Return: 1 if entry is lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 65 || c > 122)
		return (0);
	else
		return (1);
}
