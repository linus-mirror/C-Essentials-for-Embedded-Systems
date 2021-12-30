#include<stdio.h>

enum Switch_State
	{
		Off=0, Low=100, Medium=1000, High=10000
	};

	enum Switch_State Motor1_State, Motor2_State;

	Motor1_State = High;
	Motor2_State = Medium;


	if (Motor1_State == Off)
	{
		printf("\n Motor1_State is Off.");
		printf("\n Motor1_State = %d", Motor1_State);
	}
	else
	{
		printf("\n Motor1_State is High");
		printf("\n Motor2_State = %d", Motor2_State);
	}
