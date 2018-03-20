/****************************************
Author: Andrew Watts
Date: 9/19/17
Effort: 2 hours
Purpose: A program that uses bitwise operators and shifts.
Left shifting bits by one position. Now with two new functions.
Where the second output row will display different returns 1 or 0 based on
further bit manipulation in the code.
*****************************************/

#include <stdio.h>
void set_flag(int * flag_holder, int flag_position);
void unset_flag(unsigned int * flag_holder, int flag_position);
int check_flag(int flag_holder, int flag_position);
void display_32_flags(unsigned int flag_holder);
int main(int argc, char* argv[])
{
	unsigned int flag_holder = 0;
	set_flag(&flag_holder, 3);
	set_flag(&flag_holder, 16);
	set_flag(&flag_holder, 31);

	display_32_flags(flag_holder);

	unset_flag(&flag_holder, 31);
	unset_flag(&flag_holder, 3);
	set_flag(&flag_holder, 9);

	display_32_flags(flag_holder);
	return 0;
}
void set_flag(int * flag_holder, int flag_position)
{
	*flag_holder = (*flag_holder) | (1 << flag_position);
}
void unset_flag(unsigned int * flag_holder, int flag_position)
{
	//*flag_holder = (*flag_holder) | (0 << flag_position);
	*flag_holder = (*flag_holder) ^ (1 << flag_position);//^ used XOR operator
}
int check_flag(int flag_holder, int flag_position)
{
	if ((flag_holder&(1 << flag_position)) == 0)
	{
		return 0;
	}
	return 1;

}

void display_32_flags(unsigned int flag_holder)
{
	for (int i = 31; i >= 0; i--)
	{
	printf("%d", check_flag(flag_holder, i));
	if (i % 4 == 0)
	{
	printf(" ");
	}
	}
	printf("\n");
}
