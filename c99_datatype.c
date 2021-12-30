#include<stdio.h>
#include<ctype.h>

int main()
{
	int8_t A;
	uint8_t a;
	int16_t B;
	uint16_t b;
	int32_t C;
	uint32_t c;
	int64_t D;
	uint64_t d;

	printf("\n Size of int8_t = %d Bytes and %d Bits",sizeof(A),sizeof(A)*8);
	printf("\n Size of uint8_t = %d Bytes and %d Bits",sizeof(a),sizeof(a)*8);
	printf("\n Size of int16_t = %d Bytes and %d Bits",sizeof(B),sizeof(B)*8);
	printf("\n Size of uint16_t = %d Bytes and %d Bits",sizeof(b),sizeof(b)*8);
	printf("\n Size of int32_t = %d Bytes and %d Bits",sizeof(C),sizeof(C)*8);
	printf("\n Size of uint32_t = %d Bytes and %d Bits",sizeof(c),sizeof(c)*8);
	printf("\n Size of int64_t = %d Bytes and %d Bits",sizeof(D),sizeof(D)*8);
	printf("\n Size of uint64_t = %d Bytes and %d Bits",sizeof(d),sizeof(d)*8);


}
