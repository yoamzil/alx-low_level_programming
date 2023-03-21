#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void	print_alphabet_x10(void)
{
	int	i;
	
	i = 0;
	while (i < 10)
	{
		char    c;
		
		c = 'a';
		while (c <= 'z')
		{
			write(1, &c, 1);
			c++;
		}
		write(1, "\n", 1);
		i++;
	}
}
