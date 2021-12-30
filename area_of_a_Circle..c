#include<stdio.h>

void disp(void);
float square(float);

int main()
{
	disp();
	return 0;
}

void disp()
{
	float r;
	float r_sqr;
	float AreaOfCircle;
	float pi = 3.14;

	printf("Enter the radius of the Circle = ");
	fflush(stdout);
	scanf("%f",&r);

	r_sqr = square(r);

	AreaOfCircle = (pi * (r_sqr));
	printf("Area of a circle = %f",AreaOfCircle);
}

float square(float x)
{
	float sqr;

	sqr= x * x;
	return sqr;
}
