// 1kg apple ---120.50rs--> 5kg apple (120.50*5) total=q*price_apple=answer

#include<stdio.h>
main()
{
	float price_apple =120.50,quantity,total;
	printf("Enter the quantity: ");
	scanf("%f",&quantity);
	
	total=price_apple*quantity;
	
	printf("Total amount of apple you have purchase is: %f",total);
	
	return 0;
	
}
