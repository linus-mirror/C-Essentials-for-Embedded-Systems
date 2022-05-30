#include<stdio.h>

void myFun(void);

int main()
{
	myFun();
	myFun();
	myFun();
	myFun();
	myFun();
	return 0;
}

void myFun()
{
	auto int x=0;
	//static int x=0;
	printf("%d ",x++);
}