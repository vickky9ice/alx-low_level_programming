#include <stdio.h>
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
	int _putchar(char c);
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	
	_putchar('\n');

	return (0);
}
