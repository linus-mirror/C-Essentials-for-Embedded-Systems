#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"



int main()
{
	//break and continue
	int num, i, j, k;
	printf("Enter the number = ");
	scanf("%d",&num);
	
	printf("Enter the number where break need to be applied = ");
	scanf("%d",&k);
	
	if(num>=k)
	{
		line();
		for(i=0; i<num; i++)
		{
			if(i == k)
			{
				printf("Loop ended at %d\n",i);
				break;
			}
			else
			{
				printf("%d\n",i);
			}	
		}
		
		line();
		
		for(j=0; j<num; j++)
		{
			if(j == k)
			{
				printf("Loop skipped at %d\n",j);
				continue;
			}
			else
			{
				printf("%d\n",j);
			}
		}
		
		line();
		
	}
	else
	{
		printf("Invalid inputs.");
	}
}