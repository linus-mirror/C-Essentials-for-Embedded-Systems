#include<stdio.h>
#include<math.h>
#include"line.c"

int main()
{
	//Find the maximum of 3 numbers using ternary operator
	int n1, n2, n3;
	
	printf("Enter the 3 numbers = ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("\nNumber 1 = %d, Number 2 = %d, Number 3 = %d",n1,n2,n3);
	
	int result = ((n1>n2)&(n1>n3))?n1:(n2>n3)?n2:n3;
	line();
	printf("\nLargest Number = %d",result);
	line();	
	return 0;
}

