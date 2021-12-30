#include<stdio.h>

int main()
{
	int a = 0;
	do 
	{
		if (a == 12)
		{
			a = a+1;
			continue; //Continue Operation - Skip the step
		}
	printf("\n Value of a = %d",a);
	a++;
	}
	while(a<15);
	return 0;
}
