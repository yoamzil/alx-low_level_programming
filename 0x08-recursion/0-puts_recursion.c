#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void	_puts_recursion(char *s)
{
	int	i;

	i = 0;
	_putchar(s[i]);
	_puts_recursion(s[i + 1]);
}