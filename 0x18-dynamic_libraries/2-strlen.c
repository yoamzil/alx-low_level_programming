#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: String to return its length
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}

	return (len);
}
