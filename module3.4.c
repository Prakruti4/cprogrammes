// Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case
// circle=pi*r*r, triangle=b*h*1.5, rectangle=l*b

#include<stdio.h>
# define PI 3.14
int main()
{
	int choice,circle,r,tri,b,h,rect,l;
	printf("Enter choice: \n");
	scanf("%c",&choice);
	
	
	switch(choice)
	{
	    case 'A':   printf("Enter radius:  \n");
            	scanf("%d",&r);
            	circle=PI*r*r;
	            printf("Area of circle is: %d\n",circle);
	          break;  
     	case 'B':   printf("Enter breadth:  \n");
            	scanf("%d",&b);
            	printf("Enter height:  \n");
            	scanf("%d",&h);
            	tri= b*h*1.5;
	            printf("Area of tri is: %d\n",tri);
             break;
    	case 'C':  	printf("Enter breadth:  \n");
               	scanf("%d",&b);
            	printf("Enter lenght:  \n");
            	scanf("%d",&l);
	            rect=l*b;
	            printf("Area of rectangle is: %d\n",rect);
	          break;
    }
}
