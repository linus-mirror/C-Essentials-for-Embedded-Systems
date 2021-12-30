#include<stdio.h>

int main()
{
	int a = 10;
	printf(" Value of a = %d \n",a);

	//"+a" Operator
	printf("\n \n Present Value of a = %d",a);
	a += 10;
	printf("\nValue of a after += operator is %d \n",a);

	//"-a" Operator
	printf("\n \n Present Value of a = %d",a);
	a -= 10;
	printf("\n Value of a after -= operator is %d \n",a);

	//"/a" Operator
	printf("\n \n Present Value of a = %d",a);
	a /= 10;
	printf("\n Value of a after /= operator is %d \n",a);

	//"-a" Operator
	printf("\n \n Present Value of a = %d",a);
	a *= 10;
	printf("\n Value of a after *= operator is %d \n",a);

	//"-a" Operator
	printf("\n \n Present Value of a = %d",a);
	a %= 10;
	printf("\n Value of a after %= operator is %d",a);

}
