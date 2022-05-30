#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"



int main()
{
	//For Loop
	int i,j,k;
	int num;
	
	printf("Enter number : ");
	scanf("%d",&num);
	j = num;
	k = num;
	
	
	printf("\n");
	for (i=0; i<num; i++)
	{
		printf("* ");
	}
	
	//do while Loop
	printf("\n");
	do
	{
		printf("^ ");
		j--;
	}
	while(j);
		
	//While Loop
	
	printf("\n");	
	while(k)
	{
		printf("$ ");
		k--;
	}
	
	return 0;
}