// Swap two integers using a function that receives pointers.

// 1. Declare 2 variables and read the integers
// 2. Create a function called void swap(int *a, int *b)
// 3. Inside the swap functions, create a variable temp then swap the integers
// int temp = *a; => 10, *a = *b; => 20, *b = temp; => 10
// 4. Print the values before & after

#include<stdio.h>

void swap(int *a, int *b); // Function Declaration 

void swap(int *a, int *b) // Function Definition
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x, y;
	printf("Enter the Integers:");
	scanf("%d %d",&x, &y);
	
	printf("Before: x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("After: x=%d y=%d\n",x, y);
	return 0;
}