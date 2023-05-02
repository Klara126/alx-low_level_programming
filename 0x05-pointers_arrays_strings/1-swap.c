#include <stdio.h>

/**
 * swap_int - Swap two integers with each others in value
 * @a: First integer to be swapped
 * @b: Secound integer to be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
