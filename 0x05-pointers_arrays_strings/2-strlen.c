#include "main.h"

/**
 * int_strlen - length of a string
 * @s: parameter
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;
	return (count);
}
