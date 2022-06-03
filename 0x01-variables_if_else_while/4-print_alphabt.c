#include <stdio.h>

/**Author: Adeboye Victor Oyekanmi*/

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase.
 *
 * Return: the main return 0
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

