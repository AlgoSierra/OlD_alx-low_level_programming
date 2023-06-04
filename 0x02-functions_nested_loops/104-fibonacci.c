#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	unsigned int term1 = 1;
	unsigned int term2 = 2;

	printf(", %u, %u", term1, term2);

	for (count = 3; count <= 98; count++)
	{
		unsigned int nextTerm = term1 + term2;

		printf(", %u", nextTerm);
		term1 = term2;
		term2 = nextTerm;
	}

	printf("\n");
	return (0);
}
