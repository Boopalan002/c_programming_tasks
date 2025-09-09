#include<stdio.h>

int arithmetic_add(int, int); //Declaration part
int arithmetic_multi(int, int);

int arithmetic_add(int a, int b) //Definition part
{
	return a + b;
}
int arithmetic_multi(int a, int b) //Definition part
{
	return a * b;
}

int main()
{
	printf("------------------------------------------------------\n");
	printf("The addition of two numbers is: %d\n",arithmetic_add(10,10));
	printf("The multiplication of two numbers is: %d\n",arithmetic_multi(12,24));
	return 0;
}