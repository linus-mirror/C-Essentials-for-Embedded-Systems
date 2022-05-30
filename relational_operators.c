#include<stdio.h>
#include<math.h>
#include"line.c"

int main()
{
	//Relational Operators
	int x,y;
	line();
	printf("\nEnter the two Numbers = ");
	scanf("%d%d",&x,&y);
	printf("x = %d, y = %d",x,y);
	line();
	if(x >= y)
	{
		if(x>y)
		{
			printf("\nx is greater than y.");
		}
		else
		{
			printf("\nx is equal to y.");
		}
	}
	else
	{
		printf("\ny is greater than x.");
	}
	line();
	return 0;
		
}