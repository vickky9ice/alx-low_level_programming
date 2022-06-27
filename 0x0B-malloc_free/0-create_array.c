#include <stdio.h>
#include <stdlib.h>
/**Author: Adeboye Victor Oyekanmi*/

/**
 * create_array - creates and array of char
 * @c: the strings
 * @size: the size of the array
 *
 * Return: in punters.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *victor;

	i = 0;

	if (size == 0)
		return (NULL);
	victor = malloc(sizeof(char) * size);
	if (victor == NULL)
		return (NULL);

	while (i < size)
	{
		*(victor + i) = c;
		i++;
	}
	return (victor);
}
