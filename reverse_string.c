#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"



int main()
{
	//Reverse the String
	char s[20];
	int i,j;
	int c;
	
	printf("Enter the string to be reversed = ");
	scanf("%s",&s);
	
	for(i=0,j=(strlen(s)-1); i<j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	
	line();
	printf("Reversed String : %s",s);
	//puts(s);
	line();
	
	return 0;	
}
