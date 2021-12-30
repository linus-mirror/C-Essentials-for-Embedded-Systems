//Ternary Operator ? :

#include<stdio.h>

int main()
{
	int a = 6;
	int b = 12;

	int max = a>b ? a:b;
	int min = a<b ? a:b;

	printf("\nValue of Min is %d",min);
	printf("\nValue of Max is %d",max);
}
