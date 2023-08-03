// swapping in pointer a=10,b=20 ---> a=20,b=10

#include<stdio.h>
main()
{
	int a=10,b=20,*p,*q,temp;  //sorting
	// a- , b=20 , temp=10
	// a=20, b- , temp=10
	// a=20 , b=10 , temp
	
	printf("before swapping a:10 and b:20 \n");
	p=&a;
	q=&b;
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("after swapping a:%d\n b:%d ", *p,*q);
	
}
