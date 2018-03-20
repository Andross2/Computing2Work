/***********************************************************
Author: Andrew Watts
Date: 9/11/2017
Effort: 1 hour
Purpose: A for loop that prints out an iteration number starting from zero, a colon, and the value of x on a 
single line. The for loop condition uses a left shift operator which removes bits from the unsigned integer x.
***********************************************************/

#include <stdio.h>

int main(void)
{
	unsigned x = 1;
	int i;
	for (i = 0; x = x << 1; i++) {
		if (i == 0) {
		printf("%d: %u\n", i, x - 1);
		}
		printf("%d: %u\n", i + 1, x);
	}
	return 0;
}

