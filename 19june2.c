// switch practice
#include<stdio.h>
main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		{
			int a,b,add;
			printf("Enter one number: ");
			scanf("%d",&a);
			
			printf("Enter second number: ");
			scanf("%d",&b);
			
			add=a+b;
			printf("Total of a and b: %d",add);
	    }  
		   break;
		   
		case 2:
		{
			int a,b,sub;
		   	printf("Enter one number: ");
			scanf("%d",&a);
			
			printf("Enter second number: ");
			scanf("%d",&b);
			
			sub=a-b;
			printf("Subtration of a and b: %d",sub);
	    }
		   break;
		   
		case 3:
		{
		 	int a,b,c;
		   	printf("Enter one number: ");
			scanf("%d",&a);
			
			printf("Enter second number: ");
			scanf("%d",&b);
			
			c=a*b;
			printf("Multiplication of a and b: %d",c);
		}
			break;
			
		case 4:
		{
		   int a,b,d;
			printf("Enter one number: ");
			scanf("%d",&a);
			
			printf("Enter second number: ");
			scanf("%d",&b);
			
			d=a%b;
			printf("Division of a and b: %d",d);
		}
			break;	
	}
}
