// addition in pointer

#include<stdio.h>
main()
{
	int a,b,sum,*p,*q; 
	
	printf("enter one number: \n");
	scanf("%d",&a);
	printf("enter second number: \n");
	scanf("%d",&b);
	
	p=&a;
	q=&b;
	
	sum=*p+*q;
	printf("total is: %d",sum);
}
