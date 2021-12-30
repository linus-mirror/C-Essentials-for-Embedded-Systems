// Compare two number and say which is a lesser number

//No input No return

void LessNum(void);

int main()
{
	LessNum();
	return 0;
}

void LessNum(void)
{
	int a,b;

	printf(" Enter a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	if (a<b)
	{
		printf("\n Lesser Number = %d",a);
	}
	else
	{
		printf("\n Lesser Number = %d",b);
	}
}

//No input with return

/*int LessNumber(void);

int main()
{
	int low;

	low = LessNumber();
	printf(" Lesser Number = %d",low);
}

int LessNumber()
{
	int a,b;

	printf(" Enter a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	if (a<b)
	{
		return a;
	}
	else
	{
		return b;
	}

}*/

//With Input and No Return

/*void LessNumber(int,int);

int main()
{
	int a,b;

	printf(" Enter a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	LessNumber(a,b);
	return 0;
}

void LessNumber(int i, int j)
{
	if (i<j)
	{
		printf("\n Lesser Number = %d",i);
	}
	else
	{
		printf("\n Lesser Number = %d",j);
	}

}
*/

//With Input and With Return

/*
int LessNumber(int,int);

int main()
{
	int a,b;

	printf(" Enter a & b = ");
	fflush(stdout);
	scanf("%d %d",&a,&b);

	int x = LessNumber(a,b);
	printf("Lesser Value = %d",x);
	return 0;
}

int LessNumber(int i, int j)
{
	if (i<j)
	{
		return i;
	}
	else
	{
		return j;
	}

}
*/
