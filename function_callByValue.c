#include<stdio.h>

float square(float);
float multiply(float);

int main()
{
	float a,b;

	printf(" Enter the value of a = ");
	fflush(stdout);
	scanf("%f",&a);

	b = square(a);			//CALLER FUNCTION

	printf("\n Square of %f is %f",a,b);
}

float square(float x)		//CALLED FUNCTION
{
	float y;

	y = multiply(x);
	return (y);
}

float multiply(float z)
{
	float s = z * z;
	return s;
}
