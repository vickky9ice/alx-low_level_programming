#include "_putchar.h"
 
/**Author - Adeboye Victor*/

/**
 * main - check the code
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
