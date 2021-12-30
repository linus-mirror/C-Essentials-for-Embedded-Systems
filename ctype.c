#include<stdio.h>
#include<ctype.h>

int a = 10; //Global Variable Declaration

int main()
{
	int c;
	c = getchar();
	putchar(toupper(c));
}
