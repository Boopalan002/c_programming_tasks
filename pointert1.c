// Read an integer, point a pointer to it, print the value, 
// its address, and the dereferenced value.

// 1. Declare int x; and read the integer
// 2. Declare int *p = &x; to store the address
// 3. Print x, the address of the x, and dereferenced value of x (*p)

#include<stdio.h>
int main(void)
{
	int x;
	printf("Enter an Integer:")	;
	if(scanf("%d",&x) != 1) return 0;
	
	int *p = &x;
	printf("x= %d\n",x);
	printf("&x =%p\n",&x);
	printf("*p =%d\n",*p);
	
	*p = *p + 2;
	
	printf("After *p += 2: x = %d, *p = %d\n",x,*p);
	
	
	
	
	return 0;
}