#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * swap_int - swaps the value of two integers
 * @a: first pointer value to swap with b
 * @b: second pointer value to swap with a
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
