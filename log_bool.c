//Logical Operator using bool datatype
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a,b;
	bool out;
	printf("Enter the value of A & B : ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	printf("\n Is a greater than b?");

	out = (a>b);
	if(out == 1)
	{
		printf("\n True");
	}
	else
	{
		printf("\n False");
	}


}
