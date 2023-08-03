// c--->f  f=1.8 * c + 32

#include<stdio.h>
main()
{
	float c,f;
	printf("Enter the celsius: \t");
	scanf("%f",&c);
	
	f=1.8*c+32;
	
	printf("After converting celsius into fahrenhite is: %.2lf",f);  //.2l--- 2 digit after point
	
}
