#include "main.h"

/**
 * swap_int - swap the value of the integers
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
