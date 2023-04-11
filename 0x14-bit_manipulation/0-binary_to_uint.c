#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @r: A pointer to a string of 0 and 1 chars.
 *
 * Return: If r is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *r)
{
	unsigned int num = 0;
	int len = 0;

	if (r[len] == '\0')
		return (0);

	while ((r[len] == '0') || (r[len] == '1'))
	{
		num <<= 1;
		num += r[len] - '0';
		len++;
	}

	return (num);
}
