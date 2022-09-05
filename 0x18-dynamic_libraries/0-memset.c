#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _memset - fills memory with a constant byte.
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of spaces to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		*(s + v) = b;
	}
	return (s);
}
