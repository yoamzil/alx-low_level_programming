#include <unistd.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int	_abs(int c)
{
        if (c >= 0)
        {
                return (c);
        }
        return (-c);
}
