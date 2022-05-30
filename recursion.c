#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"

int fact(int);

int main()
{
	//Recursive Function
	int num;
	printf("Enter the Number = ");
	scanf("%d",&num);
	
	int res = fact(num);
	printf("Factorial of %d! = %d",num,res);
	return 0;
} 

int fact(int x)
{
	if(x == 0)
	{
		return 1;
	}
	else
	{
		return (x * fact(x-1));
	}
}
