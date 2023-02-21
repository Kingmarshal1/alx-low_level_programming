#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c tostdout
 * @c: The character to print
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
