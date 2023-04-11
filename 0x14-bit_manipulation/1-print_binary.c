#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @r: The number to be printed in binary.
 */
void print_binary(unsigned long int r)
{
	if (r > 1)
		print_binary(r >> 1);

	_putchar((r & 1) + '0');
}
