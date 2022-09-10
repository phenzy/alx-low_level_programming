#include <stdio.h>

/**
 * main - main block
 * Description: a program that prints all the numbers of base 16
 * in lowercase followed by a new line
 * Return: 0
 */

int main(void)
{
	char letter;

	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
