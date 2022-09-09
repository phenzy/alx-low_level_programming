#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 **the parameter is here
**down below
*/

int main(void);

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("The value of n is greater than 0\n"); }

	else if (n == 0)
	{
	printf("The value of n is equal to 0\n"); }

	else
	{
	printf("The value of n is equal to 0\n"); }

	return (0);
}
