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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
