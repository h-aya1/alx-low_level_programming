#include "main.h"

/**
 * swap_int - swap between two ints
 * @a: parameter1
 * @b: parameter2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
