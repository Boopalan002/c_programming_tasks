/*
Sum of Digits

Example: 1234 = 10

Arithmetic Operators: Modulus (%) = 5%2 = 1

1234%10 = 4 =0+4=4 => 123
123%10 = 3 = 4+3=7 =>12
12%10 = 2 = 7+2=9 => 1
1%10 = 1 = 9+1=10 => 0

Algorithm:

Step 1: Start the Program
Step 2: Input an integer number n = 1234
Step 3: Create another new variale and assign the n value
Step 4: Initilaize the variable sum = 0
Step 5: Use while loop with n > 0
	i. Get the last digit => n % 10
	ii. Add the digit with updated sum value
	iii. remove the last digit n / 10
Step 6: Display the final value
Step 7: Stop the program
*/

#include<stdio.h>
int main()
{
	int n, sum =0, digit;
	printf("Enter an Integer:");
	scanf("%d", &n);
	
	int temp = n;
	
	if(n < 0)
	{
		n = -n;
	}
	
	
	while(n > 0)
	{
		digit = n % 10;
		sum += digit; //sum = sum + digit;
		n /= 10; // n = n / 10;
	}
	
	printf("Sum of digits of %d = %d\n",temp,sum);
	
	
	return 0;
}