//Write a Program to check the given number is prime or not prime.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("The number is not prime");
	}
	else
	{
		printf("The number is prime");
	}
}
