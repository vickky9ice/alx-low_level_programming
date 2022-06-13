#include "main.h"
/** Author: Adeboye Victor Oyekanmi*/

/**
 * 0-reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to 98
 */

void reset_to_98(int *n)
{
	int new = 98;
	int *n;

	n = &new;

	_putchar("The value of int *n pointer is: %x\n" &new );

	return (0);
}
