#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: Character to be print
 *
 * Return: On success 1
 * On error, -1 is returned, and errorno is set appropriately
 */

int _putchar(char c);

{

	return (write(1, &c, 1));

}
