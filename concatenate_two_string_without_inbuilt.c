#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//Concatenation without using inbuilt function
	
	char firstName[15];
	char secondName[15];
	char fullName[50];
	int i=0,j=0;
	
	printf("First Name: ");
	scanf("%s",&firstName);
	
	printf("Second Name: ");
	scanf("%s",&secondName);
	
	for(i=0; firstName[i]!='\0'; i++)
	{
		fullName[i] = firstName[i];
	}
		
	for(i; secondName[j]!='\0'; i++)
	{
		fullName[i] = secondName[j];
		j++;
	}
	
	printf("Full Name = %s",fullName);
	
	return 0;	
}
