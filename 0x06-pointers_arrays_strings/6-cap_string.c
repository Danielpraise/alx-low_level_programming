#include "main.h"
/**
 *cap_string -> capitalization function
 *@x: string param
 *Return: Capitalized version of the string
 */
char *cap_string(char *x)
{	x = "sami, is; in learn programming africa"
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if  ((a == 0 || s[a - 1] == spc[1]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++;
	}
}
