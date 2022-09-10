#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry poin
*
* Return: Always 0 (Success/correct)
*/

int main(void);

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("The value of n is positive\n");
	}
	else if (n == 0)
	{
	printf("The value of n is zero\n"); 
	}
	else
	{
	printf("The value of n is negative\n");
	}

	return (0);
}
