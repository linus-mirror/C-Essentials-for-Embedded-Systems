#include<stdio.h>
#include<math.h>
#include"line.c"

int main()
{
	//Logical Operators
	int x,y;
	line();
	printf("\nEnter the two Numbers = ");
	scanf("%d%d",&x,&y);
	printf("x = %d, y = %d",x,y);
	line();
	
	if((x==5)&&(y==10))
	{
		printf("\nAND - True");
	}
	else
	{
		printf("\nAND - False");
	}
	
	line();
	if((x==5)||(y==10))
	{
		printf("\nOR - True");
	}
	else
	{
		printf("\nOR - False");
	}
	
	line();
	if(!(x==5))
	{
		printf("\nNOT - True");
	}
	else
	{
		printf("NOT - False");
	}
	return 0;
		
}