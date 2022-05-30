#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//Insersion Sort
	int a[100];
	int n,temp;
	int i,j;
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
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	line();
	
	//After Sorting
	for(i=1; i<n; i++)
	{
		temp = a[i];
		j = i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	
	line();
	printf("After Sorting : ");
	for(j=0; j<n; j++)
	{
		printf("%d ",a[j]);
	}
	line();
	
	return 0;
}


