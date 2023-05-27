#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary form of a number
 * @n: the decimal number to print to use
 */
void print_binary(unsigned long int a)
{
	unsigned long int temp;
	int shifts;

	if (a == 0)
	{
		printf("0");
		return;
	}

	for (temp = a, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((a >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
