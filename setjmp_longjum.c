#include<stdio.h>
#include<setjmp.h>

jmp_buf buf; // buf is the argument for jum_buf 

int jump()
{
	printf("\n Print Statement 3.");

	longjmp(buf,0);
	printf("\n Print Statement 4.");

}

int main()
{
	if (setjmp(buf))
	{
		printf("\n Print Statement 1.");
	}
	else
	{
		printf("\n Print Statement 2.");
		jump();
	}
}
