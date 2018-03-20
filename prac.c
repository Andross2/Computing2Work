#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
* Separates a number into three parts: a sign (+, -, or blank),
* a whole number magnitude, and a fractional part.
*/
void separate(float num, char *signp, int *wholep, float *fracp);
int main(void)
{
	float number;
	char sign;
	int whole;
	float fracc;

	printf("Insert number: ");
	scanf("%f", &number);
	printf("%f", number);

	separate(number, &sign, &whole, &fracc);

	printf("%d %f\n", whole, fracc);

	return(0);
}
void separate(float  num,    /* input - value to be split                     */
	char   *signp,  /* output - sign of num                          */
	int    *wholep, /* output - whole number magnitude of num        */
	float *fracp)  /* output - fractional part of num               */
{
		float magnitude; /* local variable - magnitude of num             */
		/* Determines sign of num */
		if (num < 0)
			*signp = '-';
		else if (num == 0)
			*signp = ' ';
		else
			*signp = '+';
		/* Finds magnitude of num (its absolute value) and
		22.
		separates it into whole and fractional parts                    */
		magnitude = fabs(num);
		*wholep = floor(magnitude);
		*fracp = magnitude - *wholep;
}
