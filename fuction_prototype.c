#include<stdio.h>

// 4 prototype

void read_data(void); // No input and No return
int add(int,int);     // With Input and With return
void disp_output(char); // With Input and No return


int main() //No input with return
{
	read_data();
	return 0;
}

void read_data(void) //No input and No Return
{
	int a;
	int b;
	int c;

	printf("Enter the value of a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	c = add(a,b);
	disp_output(c);
}

int add(int x, int y) //With Input and Return Output
{
	int z;

	z = x+y;
	return z;
}

void disp_output(char sum) //Input and No output
{
	printf("Sum of a & b = %c",sum);
}
