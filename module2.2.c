// Write a program to find the simple Interest & Compound Interest.

#include<stdio.h>
void main() 
{
	float p, r, t, a, si, ci;
	printf("Enter Principle =\t");
	scanf("%f",&p);
	printf("Enter Rate =\t");
	scanf("%f",&r);
	printf("Enter Time =\t");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	
	printf("Simple Interest =\t%f",si);
	a= p*pow((1 + r / 100),t);    // CI = principle * pow((1 + rate / 100), time)
	ci= a - p;         // CI = P^(1+R/100)T - P
	printf("\nCompound Interest =\t%f",ci);	
}

