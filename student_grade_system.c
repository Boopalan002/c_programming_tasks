#include<stdio.h>

#define MAX_STUDENTS 60
#define MAX_SUBJECTS 6


void inputMarks(int n, int m, int marks[MAX_STUDENTS][MAX_SUBJECTS]);
void calculateTotalAvg(int n, int m, int marks[MAX_STUDENTS][MAX_SUBJECTS], int total[], float average[]);
char stuGrade(float average);

int main()
{
	
	int n, m;
	int marks[MAX_STUDENTS][MAX_SUBJECTS];
	int total[MAX_STUDENTS];
	float average[MAX_STUDENTS];
	char grade[MAX_STUDENTS];
	
	printf("Enter the number of students:");
	scanf("%d",&n);
	if(n < 1 || n > MAX_STUDENTS)
	{
		printf("Invalid Number");
	}
	
	printf("Enter the number of subjects:");
	scanf("%d",&m);
	if(m < 1 || m > MAX_SUBJECTS)
	{
		printf("Invalid Number");
	}
	
	inputMarks(n, m, marks);
	calculateTotalAvg(n, m, marks, total, average);
	
	for(int i=0; i<n; i++)
	{
		grade[i] = stuGrade(average[i]);
	}
	
	
	
	return 0;
}


void inputMarks(int n, int m, int marks[MAX_STUDENTS][MAX_SUBJECTS])
{
	for(int i=0; i<n; i++) // outer loop
	{
		int value;
		printf("Enter marks for Student %d:\n",i+1);
		for(int j=0; j<m; j++) // inner loop
		{ 
			printf("Subject %d", j+1);
			scanf("%d",&value);
			if(value < 0 || value > 100)
			{
				printf("Invalid Number");
			}
			marks[i][j] = value;
		}
	}
}

void calculateTotalAvg(int n, int m, int marks[MAX_STUDENTS][MAX_SUBJECTS], int total[], float average[])
{
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<m; j++)
		{
			sum += marks[i][j];
		}
		total[i]=sum;
		average[i] = sum/m;
	}
}

char stuGrade(float average)
{
	if(average >= 90)
	{
		return 'A';
	}
	else if(average >= 80)
	{
		return 'B';
	}
	else if(average >= 70)
	{
		return 'C';
	}
	else if(average >= 60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
	
}