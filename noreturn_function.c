#include<stdio.h>
#include<stdnoreturn.h>

_Noreturn void print(void);

int main()
{
	print();
	printf("\n This is main print.");
}

_Noreturn void print() //Noreturn datatype
{
	printf(" This is a void print.");
	printf("\n No Return!");
	abort();
}
