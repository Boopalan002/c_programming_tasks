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

float average(int n, float arr[])
{
	return add(n, arr) / n;
}

float findMax(int n, float arr[])
{
	float max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float findMin(int n, float arr[])
{
	float min = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int n, choice;
	char count[5];
	float arr[20];
	
	do
	{
	
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
		printf("5. Average\n");
		printf("6. Maximum Value\n");
		printf("7. Minimum Value\n");
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
			case 5:
				printf("Average= %.2f\n",average(n, arr));
				break;
			case 6:
				printf("Maximum Value= %.2f\n",findMax(n, arr));
				break;
			case 7:
				printf("Minimum Value= %.2f\n",findMin(n, arr));
				break;
			default:
				printf("Invalid Choice\n");
						
		}
		
		printf("Do you want to perfom another calculation? (Yes/No):");
		scanf("%4s",count);
		
	}while((count[0] == 'Y' || count[0] == 'y') &&
		   (count[1] == 'E' || count[1] == 'e') && 
		   (count[2] == 'S' || count[2] == 's') && 
		   count[3] == '\0');
	
	return 0;
}