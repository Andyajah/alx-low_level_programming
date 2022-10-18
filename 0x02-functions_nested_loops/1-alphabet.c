#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
*/

void print_alphabet(void)
{
	inj j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
