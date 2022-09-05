#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		*(dest + v) = *(src + v);
	}
	return (dest);
}
