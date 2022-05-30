#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"line.c"



int main()
{
	//Array
	//int a[] = {2,4,6,8,10,12}; //Memory Jump - 4 Bytes
	//double b[] = {1.0,2.0,3.0,4.0,5.0,6.0};  // Memory Jump - 8 Bytes
	char b[] = {'a','b','c','d','e','f','g'};  // Memory Jump - 1 Byte
	for (int i=0; i<6; i++)
	{
		printf("Element %c = %d\n",b[i],&b[i]);
	}
	return 0;
	
}