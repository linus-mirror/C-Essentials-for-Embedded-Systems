#include<stdio.h>

int main()
	{
		int x, y;
		printf("Enter two integers: ");
		fflush(stdout);
		scanf("%d %d",&x, &y);
		if(x > y)
			{
				printf("X is greater than Y.");
			}
		else if(x == y)
			{
				printf("X is equal to Y.");
			}
		else
			{
				printf("X is less than Y.");
			}
	}
