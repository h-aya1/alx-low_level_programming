#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1 ; i <= siz; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
