#include "main.h"
/**
 * swap_int - to check the code.
 * @a: declaration of a and paramters for function swap_int
 * @b: declaration of b and paramters for function swap_int
 * Return:  0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
