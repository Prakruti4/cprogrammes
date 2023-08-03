// area of circle, triangle,rectangle....
// circle=pi*r*r, triangle=b*h*1.5, rectangle=l*b

#include<stdio.h>
#define PI 3.14
main()
{
	int circle,r,tri,b,h,rect,l;
	printf("Enter radius:  \n");
	scanf("%d",&r);
	circle=PI*r*r;
	printf("Area of circle is: %d\n",circle);
	
	printf("Enter breadth:  \n");
	scanf("%d",&b);
	printf("Enter height:  \n");
	scanf("%d",&h);
	tri=b*h*1.5;
	printf("Area of triangle is: %d\n",tri);
	
	
	printf("Enter breadth:  \n");
	scanf("%d",&b);
	printf("Enter lenght:  \n");
	scanf("%d",&l);
	rect=l*b;
	printf("Area of rectangle is: %d\n",rect);
	
}
