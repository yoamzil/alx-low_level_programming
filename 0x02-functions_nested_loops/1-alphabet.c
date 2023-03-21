#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	write(1, "\n", 1);
}
