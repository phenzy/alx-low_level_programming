
Pull requests
Issues
Marketplace
Explore
@phenzy
TechByDami /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

alx-low_level_programming/0x06-pointers_arrays_strings/7-leet.c
@TechByDami
TechByDami encodes a string into 1337 🌍🏆🇳🇬🔥
Latest commit ac4855d 11 hours ago
History
1 contributor
executable file 30 lines (26 sloc) 504 Bytes
#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};


	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_case[i] || *(s + count) == upper_case[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
