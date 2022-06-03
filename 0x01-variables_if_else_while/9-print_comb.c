#include <stdio.h>

/**Authr: Adeboye Victor Oyekanmi*/

/**
 * main - Entry point
 *
 * Description: a program that prints all possible combinations of single-digit numbers
 *
 * Return: the main return 0
 *
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
