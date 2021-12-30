#include<stdio.h>
#include<stddef.h>

int main()
{
	size_t s;
	unsigned char A;
	int I;
	int N = -1;
	signed char B;
	short int P;
	long int Q;
	long long int R;
	float F;
	double X;

	B = 65.35; // Assigning a float value to a character.
	printf("\n Size of signed char B = %c",B); // Prints Char = 65 i,e; "A" and floating number gets ignored.
  
  //Size of stdint datatypes.
  
	printf(" Size of unsigned char A = %d Bytes.",sizeof(A));
	printf("\n Size of signed int I = %d Bytes.",sizeof(I));
	printf("\n Size of signed char B = %d Bytes.",sizeof(B));
	printf("\n Size of short int P = %d Bytes.",sizeof(P));
	printf("\n Size of long int Q = %d Bytes.",sizeof(Q));
	printf("\n Size of long long int R = %d Bytes.",sizeof(R));
	printf("\n Size of float F = %d Bytes.",sizeof(F));
	printf("\n Size of double X = %d Bytes.",sizeof(X));
	printf("\n Size of unsigned N = %d Bytes.",sizeof(N));
	printf("\n Size of size_t s = %d Bytes.",sizeof(s)); // size_t is a unsigned integral type which is included in <stddef.h> library

	return 0;
}
