#include <stdio.h>

/**
 * main - Prints all alphabets in lowercase.
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
