#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; *(s + v); v++)
	{
		if (*(s + v) == c)
			return (s + v);
	}
	if (*(s + v) == c)
		return (s + v);
	return (0);
}
