#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all the numbers of base 16
 * in lowercase, followed by a new line in c programming
 * Return: Always (0) (Success)
*/

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
