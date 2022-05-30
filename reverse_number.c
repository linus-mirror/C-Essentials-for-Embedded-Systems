#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"



int main()
{
	//Reverse of a Number using while and do-while loop
	int num, num_mod;
	int rev = 0;
	
	int dnum, dnum_mod;
	int drev = 0;
	
	line();
	printf("Enter the Number = ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		num_mod = num%10;
		num = num/10;
		rev = rev * 10 + num_mod;
	}
	
	printf("While Loop Output\n");
	printf("Reverse of the Number = %d",rev);
	
	line();
	
	printf("Enter the Number = ");
	scanf("%d",&dnum);
	
	do
	{
		
		dnum_mod = dnum%10;
		drev = drev * 10 + dnum_mod;
		dnum = dnum/10;		
	}
	while(dnum!=0);
	
	printf("\nDo - While Loop Output\n");
	printf("Reverse of the Number = %d",drev);
	line();
}