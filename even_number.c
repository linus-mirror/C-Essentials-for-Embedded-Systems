#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"



int main()
{
	//Display all even numbers from 1 to 50 excluding (skipping) 25 to 30
	static int num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(int i=0; i<=num; i++)
	{
		//Skipping numbers between 25 and 30
		if((i>=25) && (i<=30))
		{
			continue;
		}
		else
		{
			if((i%2)==0)
			{
				printf("%d ",i);;
			}		
			else
			{
				continue;
			}
		}
	}
}