#include <stdio.h>

/**Author: Adeboye Victor Oyekanmi*/

/**
 * main - Entry point
 *
 * Description: a program that prints the lowercase alphabet in reverse
 *
 * Return: the main return 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
