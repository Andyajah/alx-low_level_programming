#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line in c programming language.
 * Return: Always (0) (Success)
*/

int main(void)
{
	char c;

	char d;

	c = 'a';

	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}

	putchar('\n');

	return (0);

}
