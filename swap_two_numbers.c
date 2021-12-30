#include<stdio.h>

int main()
{
	int a,b;
	int temp;

	printf(" Enter the value of a = ");
	fflush(stdout);
	scanf("%d",&a);

	printf("\n Enter the value of b = ");
	fflush(stdout);
	scanf("%d",&b);

	printf("\n \n Swapping a & b!!!!!");
	temp = a;
	a = b;
	b = temp;

	printf("\n \n Value of a = %d",a);
	printf("\n Value of b = %d",b);
}
