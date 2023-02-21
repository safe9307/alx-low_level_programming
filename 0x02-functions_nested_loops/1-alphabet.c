#include "main.h"

/**
 * print_alphabet - for each alphabet it turns it to a lower case
 * it executes, and prints it
 * Return: nothing
 */
void print_alphabet(void)
{
        int n;

        for (n = 'A'; n <= 'Z'; n++)
                putchar (tolower(n));
        putchar('\n');
}
