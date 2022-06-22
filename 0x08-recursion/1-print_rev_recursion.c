#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to reverse
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
