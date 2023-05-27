#include "main.h"
#include <stdio.h>

/**
 * binary_to_unsint - Transform binary number to unsigned int
 * @x: char string
 * Return: Transform decimal number or 0 if it s unconvertable char
 */
unsigned int binary_to_uint(const char *x)
{
	unsigned int tot, pwr;
	int lenght;

	if (x == NULL)
		return (0);

	for (lenght = 0; x[lenght]; lenght++)
	{
		if (x[lenght] != '0' && x[lenght] != '1')
			return (0);
	}

	for (pwr = 1, tot = 0, lenght--; lenght >= 0; lenght--, pwr *= 2)
	{
		if (x[lenght] == '1')
			tot += pwr;
	}

	return (tot);
}
