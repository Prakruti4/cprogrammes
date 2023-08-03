// if else nested
#include<stdio.h>
main()
{
	int a=10,b=20,c=30;
	
	if(a<b<c)
	{
		if(a<c)
		{
			printf("A is smaller");
		}
		else
		{
			printf("C is smaller");
		}
	}
}
