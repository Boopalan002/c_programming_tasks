#include<stdio.h>

float add(int n, float arr[])
{
	float sum = 0; // local variale
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	return sum;
}

float subtract(int n, float arr[])
{
	float difference = arr[0];
	for(int i=1;i<n;i++)
	{
		difference -= arr[i];
	}
	return difference;
}

float multiply(int n, float arr[])
{
	float product = 1; // local variale
	for(int i=0;i<n;i++)
	{
		product *= arr[i];
	}
	return product;
}

float divide(int n, float arr[])
{
	float result = arr[0]; // local variale
	for(int i=1;i<n;i++)
	{
		if(arr[i] == 0)
		{
			printf("Error: Division by Zero\n");
			return 0;
		}
		result /= arr[i];
	}
	return result;
}

int main()
{
	int n, choice;
	float arr[20];
	
	
	printf("Enter how many numbers to use:");
	scanf("%d",&n);
	
	printf("Enter %d numbers:\n",n);
	//for(initilaization; condition; increment/decrement)
	for(int i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	
	printf("--- Calculator Menu ---\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Result= %f\n",add(n, arr));
			break;
		case 2:
			printf("Result= %f\n",subtract(n, arr));
			break;
		case 3:
			printf("Result= %f\n",multiply(n, arr));
			break;
		case 4:
			printf("Result= %.2f\n",divide(n, arr));
			break;
		default:
			printf("Invalid Choice\n");
					
	}
	
	return 0;
}