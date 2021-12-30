#include<stdio.h>

int main()
{
	int a;
	int b;

	printf("Enter the value of A & B = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	for (int i = 0; i<=5; i++)
	{
		if (i==3)
		{
			printf("\n \n i = 3 got skipped");
			continue;
		}
		else if(i == 5)
		{
			break;
		}

		printf("\n \n Value of i = %d",i);
		printf("\n Value of A = %d",a);
		printf("\n Value of B = %d",b);
		printf("\n Sum of A & B = %d",a+b);
		a++;
		b++;
	}

}
