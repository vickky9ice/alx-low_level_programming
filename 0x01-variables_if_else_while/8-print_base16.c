#include <stdio.h>

/**Author: Adeboye Victor Oyekanmi*/

/**
 * main - Entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: the main return 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
