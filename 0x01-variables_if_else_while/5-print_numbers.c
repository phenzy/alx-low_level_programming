#include <stdio.h>

/**
 * main - main block
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * only using putchar.
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
