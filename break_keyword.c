#include<stdio.h>

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("\n Iteration %d",i);
		if (i == 5)
			break;
	}
	printf("\n Loop terminated at Iteration Number = %d",i);
}
