#include<stdio.h>

int main()
{
	int x;

	printf(" Enter the value of x = ");
	fflush(stdout);
	scanf("%d",&x);

	if(x <= 3)
	{
		switch (x) {
		case 1:
			printf("\n Value of x = %d",x);
			//break;
		case 2:
			printf("\n Value of x = %d",x);
			//break;
		case 3:
			printf("\n Value of x = %d",x);
			//break;
		default:
			printf("\n Switch 0 doesn't exist");
			//break;
		}

	}
	else
	{
		printf("\n Invalid Switch case.");
	}
}
