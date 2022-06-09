#include "main.h"
/**Author - Adeboye Victor Oyekanmi*/

/**
 *
 * print_alphabet: a function that prints lowercase alphabets
 *
 * Return: Always return 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
