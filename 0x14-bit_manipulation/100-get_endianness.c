#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_pointer = (unsigned char *)&num;

	return ((*byte_pointer == 1) ? 1 : 0);
}
