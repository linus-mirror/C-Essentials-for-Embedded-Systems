#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"



int main()
{
	//Inbuilt String Functions

	char a[] = "sunil";
	char b[] = "kumar";
	float temp;
	
	line();
	strcpy(a,b);
	printf("a = %s",a);
	
	line();
	strcat(a,b);
	printf("%s",a);
	
	line();
	printf("len = %d",strlen(a));
	line();
	
	temp = strcmp(b,5);
	printf("Value = %f",temp);
	line();
	
	return 0;	
}
