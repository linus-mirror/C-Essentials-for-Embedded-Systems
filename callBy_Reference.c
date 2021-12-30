#include<stdio.h>

void swap(int*,int*);

int main()
{
	int a, b;

	printf(" Enter the value of a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	swap(&a,&b);
	printf("\n After swapping a = %d and b = %d",a,b);
}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
