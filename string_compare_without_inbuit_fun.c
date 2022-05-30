#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//String compare without inbuild function
	int i=0, j=0;
	char firstName[100];
	char lastName[100];
	
	printf("Enter the Name : ");
	scanf("%s",&firstName);
	
	printf("Enter the Last Name : ");
	scanf("%s",&lastName);
	
	line();
	printf("Using inbuilt function...\n");
	int temp = strcmp(firstName,lastName);
	if(temp == 0)
	{
		printf("String are Same.");
	}
	else
	{
		printf("Strings are different.");
	}
	
	line();
	
	for(i=0, j=0; firstName != '\0'; i++, j++)
	{
		if(firstName[i] == lastName[i])
		{
			if((firstName[i] == '\0') && (lastName[i] == '\0'))
			{
				break;
			}
			else
			{
				continue;
			}
		}
		else
		{
			printf("Strings are different.");
			exit(0);
		}
	}
	
	
	printf("String are same.");
	return 0;
}
