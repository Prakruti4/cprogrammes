/* Write a program user enter the 5 subjects mark. You have to make a total and find the percentage. 
percentage > 75 you have to print “Distinction”
percentage > 60 and percentage <= 75 you have to print “First class”
percentage >50 and percentage <= 60 you have to print “Second class”
percentage > 35 and percentage <= 50 you have to print “Pass class” 
Otherwise print “Fail” */

#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,total=500;
	int  per;
	
	
	printf("-------RESULT-------");
	printf("\n");
	printf("Math:");
	scanf("%d",&a);
	
	printf("Science:");
	scanf("%d",&b);
	
	printf("Social science:");
	scanf("%d",&c);
	
	printf("English:");
	scanf("%d",&d);	
					
	printf("Hindi:");
	scanf("%d",&e);
	
    sum= a + b + c + d + e ;
	printf("Total marks:  %d",sum);
	
    per = sum*100/total;
    printf("\n Per = %d", per);
    
    if(per>75)
	{
		printf("\n Distinction");  
	}
	else if(per<=75)
	{
		printf("\n First class");
	}
	else if(per<=60)
	{
		printf("\n Second class");
	}
	else if(per<=50)
	{
		printf("\n Pass class");
	}
	else if(per<=35)
	{
		printf("\n Fail");
	}

}
