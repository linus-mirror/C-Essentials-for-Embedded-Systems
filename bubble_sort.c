#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//Bubble Sort
	int a[100];
	int n,temp=0;
	printf("Enter the Number of elements to be entered : ");
	scanf("%d",&n);
	
	//Inserting Numbers
	printf("Enter the Number of elements : ");
	for(int i=0; i<n; i++)
	{
		scanf("%d ",&a[i]);
	}
	
	//Printing Numbers
	line();
	printf("Before Sorting : ");
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	line();
	
	//After Sorting
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("After Sorting : ");
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	line();
	
	return 0;
}


