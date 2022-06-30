#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string of chars
 * @s2: string of chars
 * @n: size of s2 to copy
 *
 * Return: address of newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2 = 0;
	unsigned int a, b;
	char *str_copy;
	char *tmp1 = s1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (*s1++)
		a++;
	len1 = a;
	s1 = tmp1;

	len2 = n;

	str_copy = malloc((len1 + len2) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	b = 0;
	while (b < len1)
	{
		str_copy[b] = s1[b];
		b++;
	}
	while (b < len1 + len2)
	{
		str_copy[b] = s2[b - len1];
		b++;
	}
	str_copy[b] = '\0';
	return (str_copy);
}
