#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all possible
 * different combinations of two digits in c programming
 * Return: Always (0) (Success)
*/

int main(void)
{
	int a, c = '0', b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = c; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
			if (a == b)
			{
				continue;
			}
			if (a == '8' && b == '9')
			{
				break;
			}
			else
			{
				putchar (',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
