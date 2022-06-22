#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _strlen_recursion - returns string length
 * @s: string to calculate length
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
