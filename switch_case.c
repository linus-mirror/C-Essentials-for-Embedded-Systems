#include<stdio.h>
#include<math.h>
#include<string.h>
#include"line.c"

void addition(int,int);
void subtraction(int,int);
void division(int, int);
void multiplication(int, int);

int main()
{
	//Switch Case
	int x,y;
	int operation = 0;
	printf("Enter the two numbers : ");
	scanf("%d%d",&x,&y);
	printf("Number 1 = %d, Number 2 = %d",x,y);
	
	line();
	printf("\nEnter the operation that needs to be performed \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
	scanf("%d",&operation);
	
	line();
	switch(operation)
	{
		case 1: addition(x,y);
				break;
		
		case 2: subtraction(x,y);
				break;
		
		case 3: multiplication(x,y);
				break;
		
		case 4: division(x,y);
				break;
		
		default: printf("\nInvalid Input");
				break;
	}
	line();
	return 0;
}

void addition(int a, int b)
{
	int sum = a+b;
	printf("\n1. Addition");
	printf("\nx + y = %d",sum);
}

void subtraction(int c, int d)
{
	int sub = c-d;
	printf("\n2. Subtraction");
	printf("\nx - y = %d",sub);
}

void multiplication(int e, int f)
{
	int mul = e*f;
	printf("\n3. Multiplication");
	printf("\nx*y = %d",mul);
}

void division(int g, int h)
{
	int div = g/h;
	printf("\n4. Division");
	printf("\nx/y = %d",div);
}