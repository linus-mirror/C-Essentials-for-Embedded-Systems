#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"

int deciBase(int);
int i=-1;

int main()
{
	//Binary to Decimal
	int num;
	
	printf("Enter the Binary Number : ");
	scanf("%d",&num);
	
	int res = deciBase(num);
	printf("%d",res);
	
	return 0;
}

int deciBase(int x)
{	
	int z;
	
	if(x == 0)
	{
		return 0;
	}	
	else
	{
		int y = x%10;
		x = x/10;
		i++;
		int p = pow(2,i);
		z = (y*p + deciBase(x));
	}
	return z;
	
}