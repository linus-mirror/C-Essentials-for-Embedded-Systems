#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"

int fibonacci(int);

int main()
{
	//Fabonacci Series 1,2,3,5,8,13,.....N
	int num;
	printf("Enter the Number = ");
	scanf("%d",&num);
	
	int res = fibonacci(num);
	printf("%d ",res);
	
	return 0;
} 

int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
