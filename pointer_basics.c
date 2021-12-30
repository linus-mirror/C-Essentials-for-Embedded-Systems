#include<stdio.h>

int main()
{
	char a;
	char *p;
	char* *sunil;

	a = 'A';
	p = &a;
	sunil = &p;

	printf(" Value of a = %c --> %c",a,a);
	printf("\n Address of char a --> %p",&a);
	printf("\n Size of a = %d \n",sizeof(a));

	printf("\n Value of p = %p",p);
	printf("\n Value of pointer p = %c",*p);
	printf("\n Address of pointer p = %p",&p);
	printf("\n Value of pointer of address of a = %c",*(&a));
	printf("\n Size of pointer p = %d",sizeof(*p));
	printf("\n Size of p = %d  \n",sizeof(p));

	printf("\n Value of sunil = %p",sunil);
	printf("\n Value of pointer sunil = %p",*sunil);
	printf("\n Address of pointer sunil = %p",&sunil);
	return 0;
}
