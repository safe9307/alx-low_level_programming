#include"main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: entry array
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int a_len = 0, i;

	for (i = 0; i < 8; i++)
	{
		while (a[a_len][i] != '\0')
		{
			_putchar (a[a_len][i]);
			a_len++;
		}
		_putchar ('\n');
	}
}
