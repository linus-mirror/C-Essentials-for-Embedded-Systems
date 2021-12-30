#include<stdio.h>

void print(void); //Function Prototype

int main()
{
	char a[100];
	char b[100];

	printf("Enter your First name = ");
	fflush(stdout);
	scanf("%s",&a);

	second_Name();

	printf("My Full Name is %s %s",a,b);

}

void second_Name()
{
	char b[100];
	printf("Enter your Last name = ");
	fflush(stdout);
	scanf("%s",&b);

}
