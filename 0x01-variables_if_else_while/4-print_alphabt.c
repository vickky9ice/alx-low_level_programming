#include <stdio.h>

/**
 * Author: Adeboye Victor Oyekanmi
 */

/**
 * main - Prints all letters of the alphabet except q and e
 *
 * Description: This program prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z';  d++)
	{
		if (d != 'e' && d != 'q')
		{
			putchar(d);
		}
	}

	putchar('\n');

	return (0);
}

