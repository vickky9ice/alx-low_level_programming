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
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		print_alphabet(lower);
	
	print_alphabet('\n');

	return (0);
}
