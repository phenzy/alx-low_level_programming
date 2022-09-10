#include <stdio.h>

/**
 * main - main block
 * Description: print the alphabet in lowercase,
 * in reverse followed by a new line
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
