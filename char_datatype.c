#include<stdio.h>

int main()
{
  
  // Unsigned char ranged from 0 to 255.
  
	unsigned char A = 260; //Char range is between 0 to 255 to After 255 it again starts from 0,1,2,...,255.
	unsigned char B = -6; //Char range when its a -ve number, its in the reverse order 255,254,253...0
	printf("\n Value of A is %d",A);
	printf("\n Value of B is %d",B);

	//Signed char ranged from -128 to 127.

	signed char X = 128;
	signed char Y = -129;
	printf("\n Value of X = %d",X); // Signed char after the max of 127, it starts from -128,-127,...0,1,2,...,125,126,127
	printf("\n Value of Y = %d",Y); // Signed char after the max of 127, it starts from -128,-127,...0,1,2,...,125,126,127
	return 0;
}
