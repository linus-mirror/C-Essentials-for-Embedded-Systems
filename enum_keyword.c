#include<stdio.h>

int main()
{
	enum Switch_State // Switch_State is the datatype.
	{
		Off, Low, Medium, High //Fixed datatype values
	};

	enum Switch_State Motor1_State, Motor2_State;

	Motor1_State = Off;
	Motor2_State = High;


	if (Motor2_State == High)
	{
		printf("\n Motor2_State is High.");
		printf("\n Motor1_State = %d", Motor1_State);
	}
}
