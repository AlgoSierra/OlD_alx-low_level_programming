#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 99; i++)
	{
		j = i + 1;
		while (j <= 99)
		{
			k = !(i == 98 && j == 99);
			putchar(48 + (i / 10));
			putchar(48 + (i % 10));
			putchar(' ');
			putchar(48 + (j / 10));
			putchar(48 + (j % 10));

			if (k)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
