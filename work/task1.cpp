#include "task1.h"

int checkAge(int age)
{
	if (age >= 18)
	{
		printf("Access granted!\n");
		system("pause");
		return 1;
	
	}
	else
	{
		printf("Access denied!\n");
		system("pause");
		return 0;
	}
}