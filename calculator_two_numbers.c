//Calculator for two numbers - Call by reference

#include<stdio.h>

int add(int*, int*);
int mul(int*, int*);
int sub(int*, int*);
int div(int*, int*);

int main()
{
	int a, b;

	printf(" Enter the value of a = ");
	fflush(stdout);
	scanf("%d",&a);

	printf(" Enter the value of b = ");
	fflush(stdout);
	scanf("%d",&b);

	int addition = add(&a,&b);
	int multiplication = mul(&a,&b);
	int subtraction = sub(&a,&b);
	int division = div(&a,&b);

	printf("\n Addition = %d",addition);
	printf("\n Multiplication = %d",multiplication);
	printf("\n Subtraction = %d",subtraction);
	printf("\n Division = %d",division);
	return 0;
}

int add(int *m,int *n)
{
	int sum;
	sum = *m + *n;
	return sum;
}

int mul(int *x, int *y)
{
	int z;
	z = (*x) * (*y);
	return z;
}

int sub(int *aa,int *bb)
{
	int ssum;
	ssum = *aa - *bb;
	return ssum;
}

int div(int *md,int *nd)
{
	int sumd;
	sumd = *md / *nd;
	return sumd;
}
