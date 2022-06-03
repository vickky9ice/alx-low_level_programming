#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**Author - Adeboye Victor Oyekanmi */

/*
 * main - Entry point
 *
 * Description - This program prints alphabets in lower and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
