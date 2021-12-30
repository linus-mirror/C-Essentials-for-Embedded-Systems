//Size of <stdint.h> data type.
#include<stdio.h>

int main()
{
	int8_t a;
	uint8_t b;
	int16_t c;
	uint16_t d;
	int32_t e;
	uint32_t f;
	int64_t g;
	uint64_t h;

	printf(" Size of int8_t = %d Byte",sizeof(a)); 
	printf("\n Size of uint8_t = %d Byte",sizeof(b));
	printf("\n Size of int16_t = %d Byte",sizeof(c));
	printf("\n Size of uint16_t = %d Byte",sizeof(d));
	printf("\n Size of int32_t = %d Byte",sizeof(e));
	printf("\n Size of uint32_t = %d Byte",sizeof(f));
	printf("\n Size of int64_t = %d Byte",sizeof(g));
	printf("\n Size of uint64_t = %d Byte",sizeof(h));

}
