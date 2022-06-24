#include "main.h"

/**
 * _isupper - checks for upper case character
 * Return: 1 for uppercase and 0 otherwise
 * @c: character to check
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
