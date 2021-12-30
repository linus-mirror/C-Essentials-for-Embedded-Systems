#include<stdio.h>

int main()
{
	char a = 'A';
	char b = 'B';
	char x = 'X';
	char y = 'Y';

	char c = 'A';


	switch (c)
	{
	case 'A':
	case 'B':
		printf("\n Case %c & %c are selected.",a,b);
		goto Invalid_Case; //Unconditional Jump to Invalid_Case.
		break;

	case 'X':
	case 'Y':
		printf("\n Case %c & %c are selected.",x,y);
		break;

	Invalid_Case:
		printf("\n Invalid Input");
		break;
	}
}
