#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * strcat -  appends the src string to the dest string,
 *  overwriting the terminating null byte (\0) 
 *  at the end of dest
 *  and then adds a terminating null byte
 *  @dest: A pointer to the string to be concatenated upon.
 *  @src: The source string to be appended to @dest.
 *
 *  Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int saint = 0, holy = 0;

	while (dest[saint++])
		holy++;

	for (saint = 0; src[saint]; saint++)
		dest[holy++] = src[saint];

	return (dest);
}
