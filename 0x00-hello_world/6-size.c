#include <stdio.h>

/**
 * main - the main function
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %u byte(s)", sizeof(char));
	printf("Size of int: %u byte(s)", sizeof(int));
	printf("Size of long int: %u byte(s)", sizeof(long int));
	printf("Size of long long int: %u byte(s)", sizeof(long long int));
	printf("Size of float: %u byte(s)", sizeof(float));
	return (0);

}
