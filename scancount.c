// Print the variable using used defined inputs

int main()
{
	int x,y;
	int scancount = 0;
	printf("Enter the value of X & Y");
	scancount = scanf("%d %d",&x,&y);  // Counts number of scanned values in the console
	printf("\n Value of X = %d & Y = %d",x,y);
	printf("\n Total number of inputs scanned from the console is %d",scancount);
	return 0;

}
