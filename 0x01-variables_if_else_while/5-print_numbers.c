#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line in c programming
 * Return: Always (0) (Success)
*/

int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
