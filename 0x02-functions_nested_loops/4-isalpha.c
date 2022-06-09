#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _isalpha - checks if its alphabet
 *
 * Return: 1 if alphabt and 0 otherwise
 *
 * @c: variable to check
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
