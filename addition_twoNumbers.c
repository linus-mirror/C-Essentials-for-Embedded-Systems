#include<stdio.h>

int add(int,int);

int main()
{
	int a,b;
	int sum;

	printf("Enter the value of a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	sum = add(a,b);

	printf("Sum of a & b = %d",sum);

}

int add(int x, int y)
{
	int z = x+y;
	return z;
}
