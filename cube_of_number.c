#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"

int cube(int);

int main()
{
	//Cube of a Number using Function
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	int res = cube(num);
	line();
	printf("Cube of %d = %d",num,res);
	line();
	return 0;
}

int cube(int x)
{
	int z = x*x*x;
	return z;
}