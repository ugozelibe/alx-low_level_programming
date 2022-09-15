#include"main.h"
#include <stdio.h>

/**
 *_isupper - function to check if
 *character is uppercase
 *Return: returns 1 if `c` is uppercase
 *otherwise always 0 (Success)
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
