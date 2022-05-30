#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"



int main()
{
	//Boundary condition
	int mon;
	
	do
	{
		printf("Enter the Month number you have born in :");
		scanf("%d",&mon);
	}while(mon<1||mon>12);
		
	return 0;
}