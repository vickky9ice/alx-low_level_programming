#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * _abs - computes absolute value
 *
 * Return: absolute value
 *
 * @x: integer to obtain its absolute value
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
