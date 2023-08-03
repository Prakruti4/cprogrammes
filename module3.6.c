// Write a program to print the number in reverse order.

#include<stdio.h>
#include<string.h>
main()
{
	char str[30];
	printf("Enter your numbers: ");
	scanf("%d",str);
	
	printf("%d",strrev(str));
}
