#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry poin
*
* Return: Always 0 (Success/correct)
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is equal to 0\n", n);
	}

	return (0);
}
