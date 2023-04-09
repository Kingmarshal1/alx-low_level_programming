#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 * Created by Chukwudike Igwe
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i; /** the char has to include all */

	return (*c);
}
