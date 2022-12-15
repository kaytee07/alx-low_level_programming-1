#include <stdio.h>
#include "main.h"

/**
  * main - prints the number from 1 to 0
  * for multiples of three, print fizz instead
  * multiples of five, print buzz.
  *
  * Return: 0 Always
  */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" FizzBuzz ");
		}
		else 
			printf("%d, " i);
	}
}
