// a=10 &a-->address  1234556=10

#include<stdio.h>
main()
{
	int a=10,*ptr;
	ptr=&a;
	
	printf("%d\n",a);  //10
	printf("%d\n",&a);  // address
	printf("%d\n",*ptr); // a=10 value (transfer)
	printf("%d\n",&ptr); // address of a
}
