#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//Multi-Dimensional Array
	int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int i,j;
	
	line();
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			if((i==1 && j==0) || (i==2 && j==0) || (i==3 && j==0))
			{
				printf("\n");
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	
	line();
	
	return 0;
}
