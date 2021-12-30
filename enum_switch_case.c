#include<stdio.h>


int main()
{
	enum Sunil_Kumar
	{
		Gym, Office, College
	};

	enum Sunil_Kumar a,b,c,d;

	a = 1;
	b = 2;
	c = 3;
	d = 4;


	switch (d) {
		case 1:
			printf("\n Sunil is in Gym.",a);
			break;
		case 2:
			printf("\n Sunil is in Office.",b);
			break;
		case 3:
			printf("\n Sunil is in College.",c);
			break;
		default:
			printf("\n Sunil is wasting time.");
			break;

	}
}
