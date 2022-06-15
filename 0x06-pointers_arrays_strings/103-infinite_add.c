#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}

	else if (tens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - Adds two numbers
 * @n1: Pointer to the first character of number 1
 * @n2: Pointer to the first character of number 2
 * @r: Buffer where to write the result
 * @n: Buffer size
 *
 * Return: Pointer to the result of the string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
	int len1 = 0, len2 = 0;
	int add = 0;
	int i = n - 2;

	while (n1[len1 + 1] != 0)
		len1++;
	while (n2[len2 + 1] != 0)
		len2++;
	r[n - 1] = 0;

	while (i >= 0 && (len1 >= 0 || len2 >= 0))
	{
		add += (len1 < 0 ? '0' : n1[len1]) + (len2 < 0 ? '0' : n2[len2]);
		add -= 2 * '0';
		r[i] = add % 10 + '0';
		add /= 10;
		i--;
		len1--;
		len2--;
	}

	if ((i < len1 || i < len2) || (i < 0 && add))
		return (0);

	add ? r[i] = add + '0' : 1;
	i += add ? 0 : 1;

	return (r + i);
}
