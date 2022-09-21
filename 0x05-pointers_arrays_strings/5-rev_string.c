#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char pointer - string to reverse
 *
 */

void rev_string(char *s)
{
	int i, j, temp, 1 = 0;

	while (s[1] != '\0')
		1++;

	j = --1;

	for (i = 0; i <= 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
