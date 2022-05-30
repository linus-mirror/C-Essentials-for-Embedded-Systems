#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"

void binDec(int);

int main()
{
//Binary to Decimal
	int n;
	printf("Enter the Decimal Number : ");
	scanf("%d",&n);
	
	binDec(n);
	return 0;
}

void binDec(int num)
{
	int i,j;
	int numMod, numRem;
	int a[100];
	
	for(i=0; num>0; i++)
	{
		numMod = num%2;
		num = num/2;
		numRem = i;
		a[i] = numMod;
	}
	
	for(j=numRem; j>=0; j--)
	{
		printf("%d",a[j]);
	}
	
}