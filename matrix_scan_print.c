#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//Multi-Dimensional Array
	int mat1[10][10], mat2[10][10], mat3[10][10];
	int i,j;
	int row, col;
	
	
	//Matrix 1
	line();
	printf("Enter the Size of Matrix 1 Row and Column : ");
	scanf("%d%d",&row,&col);
	printf("\nMatrix 1 : %d X %d matrix",row,col);
	
	printf("\nEnter the elements of Matrix 1 : ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Matrix 1\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(((i==1)&&(j==0))||((i==2)&&(j==0))||((i==3)&&(j==0))||((i==4)&&(j==0)))
			{
				printf("\n");
				printf("%d ",mat1[i][j]);
			}
			else
			{
				printf("%d ",mat1[i][j]);
			}
		}
	}
	
	
	//Matrix 2
	line();
	
	printf("Enter the Size of Matrix 2 Row and Column : ");
	scanf("%d%d",&row,&col);
	printf("\nMatrix 2 : %d X %d matrix",row,col);
	
	printf("\nEnter the elements of Matrix 1 : ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("Matrix 2\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(((i==1)&&(j==0))||((i==2)&&(j==0))||((i==3)&&(j==0)))
			{
				printf("\n");
				printf("%d ",mat2[i][j]);
			}
			else
			{
				printf("%d ",mat2[i][j]);
			}
		}
	}
	
	
	//Matrix 3
	line();
	
	printf("Enter the Size of Matrix 3 Row and Column : ");
	scanf("%d%d",&row,&col);
	printf("\nMatrix 3 : %d X %d matrix",row,col);
	
	printf("\nEnter the elements of Matrix 1 : ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&mat3[i][j]);
		}
	}
	
	printf("Matrix 3\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(((i==1)&&(j==0))||((i==2)&&(j==0)))
			{
				printf("\n");
				printf("%d ",mat3[i][j]);
			}
			else
			{
				printf("%d ",mat3[i][j]);
			}
		}
	}
	line();
	
	return 0;
}


