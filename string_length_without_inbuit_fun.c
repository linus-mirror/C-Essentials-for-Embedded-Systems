#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//String Length without inbuild function
	int i;
	char stringName[100];
	
	printf("Enter the String : ");
	scanf("%s",&stringName);
	
	for(i=0; stringName[i] != '\0'; i++)
	{
		continue;
	}
	
	line();
	printf("Size of the String = %d",i);
	line();
	printf("Size of the String using inbuilt function = %d",strlen(stringName));
	line();
	
	return 0;
}
