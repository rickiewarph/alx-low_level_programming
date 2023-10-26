#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the 1st no.
 * @m: the 2nd no.
 * Return: no. of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, bitcounter = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = excl >> p;
		if (current & 1)
			bitcounter++;
	}
	return (bitcounter);
}
