// if else if ladder
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
	if(marks>=80)
	{
		printf("A");  
	}
	else if(marks>=70)
	{
		printf("B");
	}
	else if(marks>=60)
	{
		printf("C");
	}
	else if(marks>=50)
	{
		printf("D");
	}
	else if(marks>=40)
	{
		printf("E");
	}
}
