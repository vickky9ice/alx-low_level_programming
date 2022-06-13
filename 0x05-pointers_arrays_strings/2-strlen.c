#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _strlen - returns the length of a string.
 * @s: Pointer pointing to a string
 * Return: return length of string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char ab = s[0];

	while (ab != '\0')
	{
		sum++;
		ab = s[i++];
	}
	return (sum);
}
