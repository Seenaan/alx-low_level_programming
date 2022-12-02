#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_bits;
	int i, number = 0;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		n_bits = exclusive >> i;
		if (n_bits & 1)
			number++;
	}
	return (number);
}
