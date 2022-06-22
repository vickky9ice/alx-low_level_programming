#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * factorial - prints factorial of a given number
 * @n: number
 * Return: 0 if n is lower, return -1 to indicate an error
 */
int factorial(int n)
{
	if (n <= 1 && n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (0);
}
