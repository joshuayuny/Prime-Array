// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MIN_DIVISOR 745
#define ZERO 0
#define LIMIT 961
#define ARRAY_LIMIT 25
int number = 2;
int divisor;
int remainder;
int prime[LIMIT];
int i;
int c;
int min_numbers = MIN_DIVISOR;
int main()
{

	while (number <= LIMIT)
	{

		if (number == 2)
		{
			prime[i] = number;
			i++;
		}

		remainder = 2;
		for (divisor = MIN_DIVISOR; divisor < number; divisor++)
		{
			if (number % divisor != 0)
			{
				{
					if (divisor % 2 == 0)
					{
						break;
					}
					else
					{
						prime[i] = number;
						i++;
					}

				}
			}
			else
			{
				break;
			}
		}
		number++;
			if (c * c == min_numbers)
			{
				printf("%d*%d=%d\n", prime[i]);
			}
	}
	return 0;
}

