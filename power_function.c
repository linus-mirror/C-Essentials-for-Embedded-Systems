#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"

double power(double var, unsigned int n);

int main()
{
	//Power of a function using Recursion
	
	double num;
	unsigned int pow;
	double result;
	
	printf("Enter the Number : ");
	scanf("%lf",&num);
	printf("Enter the Power : ");
	scanf("%d",&pow);
	
	result = power(num,pow);
	
	line();
	printf("Power(%lf,%d) = %lf ",num,pow,result);
	line();
	return 0;
}

double power(double var, unsigned int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return (power(var,n-1) * var);
	}
}