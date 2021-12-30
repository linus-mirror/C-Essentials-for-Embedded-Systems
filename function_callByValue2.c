#include<stdio.h>

// call by value, char input and int output

char char_int(int,int);

int main()
{
	char a = 'A';
	char b = 'B';
	int sum;

	sum = char_int(a,b);
	printf(" Sum of char a & b = %d",sum);
	return 0;
}

char char_int(int x,int y)
{
	int z;
	int s;
	char t;

	z = x + y;

	sprintf(t,"%s",z);
	return t;

}
