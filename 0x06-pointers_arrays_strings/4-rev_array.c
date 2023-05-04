#include "main.h"
/**
 * rev_array - Reverse the array given
 * @a: array to be reversed
 * @n: number of element to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
