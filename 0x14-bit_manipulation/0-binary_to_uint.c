#include "main.h"
#include <stdio.h>

/**
 * binary_to_unsint - Transform binary number to unsigned int
 * @b: char string
 * Return: Transform decimal number or 0 if it s unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, pwr;
	int lenght;

	if (b == NULL)
		return (0);

	for (lenght = 0; b[lenght]; lenght++)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
	}

	for (pwr = 1, tot = 0, lenght--; lenght >= 0; lenght--, pwr *= 2)
	{
		if (b[lenght] == '1')
			tot += pwr;
	}

	return (tot);
}
