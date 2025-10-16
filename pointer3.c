// Given n integers, compute min and max via a function that fills results through pointers.

// 1. Input the n integers (n=5)
// 2. Read the integers using array (int a[])
// 3. Create a function with parameters findMinMax(int n, int *min, int *max, const int *a)
// 4. Initilaize *min = a[0] and *max = a[0]


#include<stdio.h>

void findMinMax(int n, int *min, int *max, const int *a);

void findMinMax(int n, int *min, int *max, const int *a)
{
	const int *p = a; // pointer to start
	*min = *max = *p; // initialize of the first element
	for(p = a+1; p<a+n; ++p)
	{
		if(*p < *min)
		{
			*min = *p;
		}
		if(*p > *max)
		{
			*max = *p;
		}
	}
}

int main(void)
{
	int n;
	printf("Enter the total no. of Integers:");
	if(scanf("%d",&n) != 1 || n <=0) return 0;
	
	int a[10];
	if(n > 10) return 0;
	for(int i =0; i<n;i++)
	{
		int input_value;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &input_value);

        // Input validation loop
        while (input_value < 0) {
            printf("Negative values are not allowed. Please enter a non-negative integer: ");
            scanf("%d", &input_value);
        }

        a[i] = input_value; // Assign the validated input to the array
    }
	
	int mn, mx;
	findMinMax(n, &mn, &mx, a);
	printf("Min = %d, Max = %d\n",mn, mx);
	return 0;
}