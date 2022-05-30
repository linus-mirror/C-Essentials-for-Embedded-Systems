#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"


int main()
{
	//String copy without inbuild function
	int i;
	char fullName[100];
	char lastName[100];
	
	printf("Enter the Name : ");
	scanf("%s",&fullName);
	
	printf("Enter the Last Name : ");
	scanf("%s",&lastName);
	
	line();
	printf("Before Copying = %s at Address = %d",fullName,&fullName);
	line();
	
	for(i=0; lastName[i] != '\0'; i++)
	{
		fullName[i] = lastName[i];
	}
	
	fullName[i] = '\0';
	
	line();
	printf("After Copying = %s at Address = %d",fullName,&fullName);
	line();
	
	return 0;
}
