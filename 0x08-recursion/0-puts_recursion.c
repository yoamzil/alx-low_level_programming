#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void	_puts_recursion(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
