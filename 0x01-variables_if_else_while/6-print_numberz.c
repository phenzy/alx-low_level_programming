#include <stdio.h>

/**
 * main - main block
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * only using putchar and without char variables.
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
