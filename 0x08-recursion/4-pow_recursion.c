#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value that raises y
 * @y: value to be raised by x
 * Return: raised value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
