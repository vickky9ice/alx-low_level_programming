#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int saint = 0, holy = 0;

	while (src[saint++])
		holy++;

	for (saint = 0; src[saint] && saint < n; saint++)
		dest[saint] = src[saint];

	for (saint = holy; saint < n; saint++)
		dest[saint] = '\0';

	return (dest);

}
