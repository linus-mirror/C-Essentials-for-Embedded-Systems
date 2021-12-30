//Multiple Switch Case
#include<stdio.h>

int main()
{
	char a = 'A';
	char b = 'B';
	char x = 'X';
	char y = 'Y';

	char c = 'Y';


	switch (c)
	{
	case 'A':
	case 'B':
		printf("\n Case %c & %c are selected.",a,b);
		break;

	case 'X':
	case 'Y':
		printf("\n Case %c & %c are selected.",x,y);
		break;

	default:
		printf("Invalid Input");
		break;
	}
}
