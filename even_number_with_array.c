#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//Print Even Numbers with array
	//int res = 0;
	int n = input();
	printf("Even Numbers = ");
	int evenNum[100];
	for(int i=0; i<=n; i++)
	{
		if(i%2 == 0)
		{
			evenNum[i] = i;
			//printf("%d ",i);
		}
		else
		{
			continue;
		}
	}

	for (int j=0; j<=n; j++)
	{
		if(j%2 !=0)
		{
			continue;
		}
		else
		{
			printf("%d ",evenNum[j]);		
		}
	}

	return 0;
}
