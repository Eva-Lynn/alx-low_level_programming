#include "main.h"

/**
 * rev_string - to reverse a string
 * @s:string to be printed
 */
void rev_string(char *s)
{
	char a = s[0];
	int b = 0;
	int i;

	while (s[b] != '\0')
		b++;
	for (i = 0; i < b; i++)
	{
		b--;
		a = s[i];
		s[i] = s[b];
		s[b] = a;
	}
}
