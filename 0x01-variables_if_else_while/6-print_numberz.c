#include <stdio.h>

/**Author: Adeboye Victor Oyekanmi*/

/**
 * main - Entry point
 *
 * Description: a program that prints all single digit numbers of base ten
 *
 * Return: the main return 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
