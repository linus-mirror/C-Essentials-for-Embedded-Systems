//Ask Doubt

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"
#include"input.c"



int main()
{
	char a[10] = {'s','u','n','i','l','\0'};
	char b[10] = "kumar";
	char c[5] = "SKCJS";
	char d[] = {'s','u','n','i','l','\0'};
	char e[] = "kumar";
	char f[4] = "sunilk";
	
	printf("\n%s",a);
	printf("\n%s",b);
	printf("\n%s\n",c);
	printf("\n%s",d);
	printf("\n%s",e);
	printf("\n%s",f);
	printf("\n%d",&c[6]);
	printf("\n%d",&b[0]);  // Proof for array prints all the char it the null char \0.
	printf("\n%d",&c[0]);
	
	printf("\nAddress");
	printf("\na address starts from %d",&a);
	printf("\nb address starts from %d",&b);
	printf("\nc address starts from %d",&c);
	printf("\nd address starts from %d",&d);
	printf("\ne address starts from %d",&e);
	printf("\nf address starts from %d",&f);
	return 0;	
}
