#include <stdio.h>

/**
 * main - Entry point
 *
 * Description- Prints various sizes of data types.
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
