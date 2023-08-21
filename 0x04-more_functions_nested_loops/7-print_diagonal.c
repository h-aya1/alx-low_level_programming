#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
