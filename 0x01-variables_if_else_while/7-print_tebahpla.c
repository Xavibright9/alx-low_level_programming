#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in a reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'z'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
