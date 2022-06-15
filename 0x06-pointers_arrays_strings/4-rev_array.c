#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int dost, num;

	for (num = n - 1; num >= n / 2; num--)
	{
		dost = a[n - 1 - num];
		a[n - 1 - num] = a[num];
		a[num] = dost;
	}
}
