#include "main.h"
/**Author: Adeboye Victor Oyekanmi*/

/**_puts_recursion - prints a string, followed by a new line.
 * @s: string to print
 * Return: none
 */
void _puts_recursion(char *s)
{
	int v = 0;

	if (s[v] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[v]);
	s++;
	_puts_recursion(s);
}
