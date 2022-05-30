#include<stdio.h>

int func(int);

int func(int n)
{
	static int sum = 0;
	sum = sum+n;
	return sum;
}

int main()
{
	int i=3,x;
	while(i>0)
	{
		x = func(i);
		i--;
	}
	printf("%d",x);
}