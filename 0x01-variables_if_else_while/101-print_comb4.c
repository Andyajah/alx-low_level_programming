#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all possible
 * combinations of two two-digit numbers in c programming
 * Return: Alway (0) (Success)
*/

int main(void)
{
	int a, b, c;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (b < c && c < a)
				{
					putchar(b);
					putchar(c);
					putchar(a);
					if (b == '7' && c == '8' && a == '9')
					{
						break;
					}
					else
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
