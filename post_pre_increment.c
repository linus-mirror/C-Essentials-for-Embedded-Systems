#include<stdio.h>

int main()
{
	int a = 7;
	int b = 1;
	int count = 0;

			while (a != b)
			{
				++b;
				count = count + 1;
			}
			printf("\n %d times the loop runs",count);

}
