#include <stdio.h>

/**Author - Adeboye Victor Oyekanmi*/

/**
 * main - Entry point
 *
 * Description:  prints all single digit numbers of base ten
 *
 * Return: the main return 0
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
