//Header Files

#include<stdio.h>
#include<math.h>

int a = 10; // Global variable


void line(void)  // Global function
{
	printf("-------------------------------------------\n");
}

int main()
{
	line();
	int num1;
	float num2;
	printf("Enter a Number:");
	scanf("%d",&num1);
	
	num2 = sqrt(num1);
	printf("%f",num2);
	line();
	
	printf("%d",a);
	
	return 0;
}