#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"

int deciBase(int);
int i=-1;

int main()
{
	//Binary to Decimal
	int num;
	
	printf("Enter the Binary Number : ");
	scanf("%d",&num);
	
	int tnum = num;
	
	while(tnum>0)
	{
		if((tnum%10==0)||(tnum%10==1))
		{
			tnum = tnum/10;
		}
		else
		{
			line();
			printf("Enter a valid binary number!!!");
			line();
			exit(0);
		}
	}
	
	if(tnum == 0)
			{
				line();
				printf("Binary to Decimal Conversion Starts....\n\n");
				int res = deciBase(num);
				printf("Decimal number of %d = %d",num,res);
				line();
			}
	
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