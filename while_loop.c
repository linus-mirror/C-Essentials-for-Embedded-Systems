#include<stdio.h>
#include<stdint.h>

int main()
{
	int8_t a = 0;

	while(a<=10)
	{
		printf("\nHello %d",a);
		a--; //If a-- is used it run till -128, then it stops. Reason: We used a signed integer.
	}
	printf("\n Value of a = %d",a); //+127 = -129
}
