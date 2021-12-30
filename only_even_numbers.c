//print only even numbers using for-loop and continue.
#include<stdio.h>

int main()
{
	int n;

	printf("Enter the value of n = ");
	fflush(stdout);
	scanf("%d",&n);

	for(int i=0; i<n; i++)
	{
		if(i % 2 != 0)
		{
			continue;
		}
		printf("%d ",i);
	}
}
