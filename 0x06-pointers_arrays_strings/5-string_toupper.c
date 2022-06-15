#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int num = 0;

	while (str[num])
	{
		if (str[num] >= 'a' && str[num] <= 'z')
			str[index] -= 32;

		num++;
	}

	return (str);
}
