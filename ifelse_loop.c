#include<stdio.h>

int main()
	{
		int a;
		a = 0;
		printf("\n Enter the value of a = ");
		fflush(stdout); // Clears console buffer, predominanty used when printf and scanf used together.
		scanf("%d",&a);
		if(a>5)
			{
				printf("\n Value of A is greater than 5.");
			}
		else
			{
				printf("\n Value of A is Less than 5.");
			}
		return 0;
	}
