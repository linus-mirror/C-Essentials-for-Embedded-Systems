//Nested For Loop

#include<stdio.h>

int main()
{
	int n;

	printf("Enter the value of n = ");
	fflush(stdout);
	scanf("%d",&n);

	for(int r=1; r<=n; r++)
	{
		for(int c=1; c<=n; c++)
			{
				printf("* ");
			}
		printf("\n");
	}
	return 0;
}
