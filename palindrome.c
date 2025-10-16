/*
Palindrome - without builtin string functions - strrev, strcmp, strcpy, strlen

madam = madam
malayalam = malayalam
dad = dad
mom = mom

boopal = lapoob

Algorithm:

Step 1: Start the program
Step 2: Read the string from the user
Step 3: To find the length of the given string with the help of '\0'
Step 4: Compare characters from both ends
Step 5: Display the result
Step 6: Stop the program
*/

#include<stdio.h>
int main()
{
	char str[20]; // str[0] = 'm', str[1] = 'a', str[2] = 'd', str[3] = 'a', str[4] = 'm', str[5] = '\0'
	int length = 0, flag = 0;
	printf("Enter a string:");
	gets(str);
	
	//to find the length
	for(int i=0;str[i] != '\0';i++)
	{
		length++;
	}
	
	//Compare characters from both ends
	
	for(int i=0, j=length-1; i<j; i++, j--) // outer loop
	{
		
			if(str[i] != str[j])
			{
				flag = 1;
			}

	
	}
	
	if(flag == 0)
	{
		printf("%s is a palindrome",str);
	}
	else
	{
		printf("%s is not a palindrome",str);
	}
	
	//printf("Given string is %s\n:",str);
	
	return 0;
}




