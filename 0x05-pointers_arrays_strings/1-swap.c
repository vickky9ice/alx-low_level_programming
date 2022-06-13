#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * swap_int - swaps the value of two integers
 * @ab: pointer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
