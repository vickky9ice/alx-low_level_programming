#include "main.h"
/**Author - Adeboye Victor Oyekanmi*/

/**
 * main - Main Entry
 *
 * Description: a function that prints the alphabet, in lowercase
 *
 * Return: Always return 0
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
