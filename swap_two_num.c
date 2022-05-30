#include<stdio.h>
#include<math.h>
#include"line.c"

int main()
{
	//Swaapping two numbers without template
	line();
	int numOne, numTwo;
	
	printf("Enter the two numbers = ");
	scanf("%d%d",&numOne,&numTwo);
	
	line();
	printf("Number 1 = %d and Number 2 = %d",numOne,numTwo);
	line();
	numOne = numOne + numTwo;
	numTwo = numOne - numTwo;
	numOne = numOne - numTwo;
	
	printf("Number after swapping. Number 1 = %d and Number 2 = %d",numOne,numTwo);
	line();
}