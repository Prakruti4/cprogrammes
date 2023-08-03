// Write a program to make a square and cube of number.

#include<stdio.h>
main()
{
	int num,square,cube;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	square=num*num;
	cube=num*num*num;
	
	printf("Square of given number is: %d  \n",square);
	printf("Cube of given number is: %d",cube);
}

