#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int saint = 0, holy = 0;

	while (dest[saint++])
		holy++;

	for (saint = 0; src[saint] && saint < n; saint++)
		dest[holy++] = src[saint];

	return (dest);
}
