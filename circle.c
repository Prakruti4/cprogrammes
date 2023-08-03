#include<stdio.h>
#define PI 3.14
main()
{
	int r,area;
	printf("Enter the value of r: ");
	scanf("%d",&r);
	
	area= PI*r*r;
	printf("Area of circle is: %d",area);
}
