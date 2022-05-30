#include<stdio.h>
#include<math.h>
#include"line.c"

int main()
{
	//a = 7 (00000111) and b = 8 (00001000)
	unsigned char a = 7, b = 8;
	
	int resAND = a&b; //00000000 - 0
	int resOR = a|b;  //00001111 - 15
	int resXOR = a^b; //00001111 - 15
	int resNOT = ~a;  //11111000 - 248
	int resRightShift = a>>1; //00000011 - 3
	int resLeftShift = a<<1;  //00001110 - 14
	
	printf("\nresAND Out = %d",resAND);
	printf("\nresOR Out = %d",resOR);
	printf("\nresXOR Out = %d",resXOR);
	printf("\nresNOT Out = %d",resNOT);
	printf("\nresRightShift Out = %d",resRightShift);
	printf("\nresLeftShift Out = %d",resLeftShift);
	
	return 0;
}

