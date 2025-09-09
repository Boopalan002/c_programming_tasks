#include<stdio.h>

int arithmetic_add(int, int); //Declaration part

int arithmetic_add(int a, int b)
{
	return a + b;
}

int main()
{
	printf("------------------------------------------------------\n");
	printf("The addition of two numbers is: %d",arithmetic_add(10,10));
	return 0;
}