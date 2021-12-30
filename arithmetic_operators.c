#include<stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

		printf(" Present value of c = %d",c);
		printf("\n Value of c after pre-increment is %d",++c);

		printf("\n---------------------------------------------");
		printf("\n Present value of c = %d",c);
		printf("\n Value of c after pre-decrement is %d",--c);

		printf("\n---------------------------------------------");
		printf("\n Present value of c = %d",b);
		printf("\n Value of c after post-increment is %d",b++);
		printf("\n Value of c after increment = %d",b);

		printf("\n---------------------------------------------");
		printf("\n Present value of c = %d",b);
		printf("\n Value of c after post-decrement is %d",b--);
		printf("\n Value of c after decrement = %d",b);

		printf("\n---------------------------------------------");
		printf("\n Present value of a = %d & b = %d",a,b);
		printf("\n Addition of a & b = %d",(c = (a+b)));
		printf("\n Subtraction of a & b = %d",(c = (a-b)));
		printf("\n Multiplication of a & b = %d",(c = (a/b)));
		printf("\n Multiplication of a & b = %d",(c = (a*b)));
		printf("\n Division of a & b = %d",(c = (a/b)));
		printf("\n Reminder of a & b = %d",(c = (a%b)));

}
