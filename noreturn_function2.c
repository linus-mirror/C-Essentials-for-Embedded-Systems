#include<stdio.h>
#include<stdnoreturn.h>

_Noreturn add(int,int);

int main()
{
	int a, b;
	int sum;

	printf("Enter the value of a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	add(a,b);
	printf("Main Sum of %d & %d = %d",a,b,sum);
}

_Noreturn add(int x,int y)
{
	int c;

	c = x + y;
	printf("No-return Sum of %d & %d = %d",x,y,c);
	abort();
}
