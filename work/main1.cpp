
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //руссификация вывода, setlocale не сработал
	int age;
	printf("Enter your age: \n");
	scanf_s("%d", &age);
	checkAge(age);
	return 0;
}