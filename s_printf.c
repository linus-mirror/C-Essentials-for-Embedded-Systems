//Character count using sprintf

#include<stdio.h>
#include<string.h>

int main()
{
	char *s = "Hi C Language.";
	char a[100];
	int x=7, y=6;

	printf(s);
	printf("\n %s",s); // Proper way of printing a variable

	sprintf(a,"\nx = %d, y = %d\n", x, y); // Variable "a" get assigned with the data "STRING" entered for x and y
	printf("\n%s",a);
}
