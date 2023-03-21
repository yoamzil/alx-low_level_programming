#include <unistd.h>

/**
 * _abs - check the code.
 *
 * Return: Always abs of c.
 */

int	_abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	return (-c);
}
