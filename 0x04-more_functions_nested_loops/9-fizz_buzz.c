#include "main.h"
#include <stdio.h>

/**
 * main - prints nums from 1 to 100 but for multiple of 3 , 5 and both it prints Fizz , Buzz and FizzBuzzz respectively
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			_putchar('Fizz');
		else if (i % 5 == 0)
			_putchar('Buzz');
		else if (i % 3 == 0 && i % 5 == 0)
			_putchar('FizzBuzz');
		else
			_putchar(i);
	}
	_putchar('\n');
}
