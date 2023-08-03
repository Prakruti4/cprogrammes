//switch
#include<stdio.h>
main()
{
	char week;
	printf("Enter week: \n");
	scanf("%c",&week);
	
	switch(week)
	
	{
		case'A':printf("MONDAY");
		    break;
		case'B':printf("TUESDAY");
		    break;
		case'C':printf("WEDNESDAY");
		    break;
		case'D':printf("THURSDAY");
		    break;
		case'E':printf("FRIDAY");
		    break;
		case'F':printf("SATURDAY");
		    break;
		case'G':printf("SUNDAY");    
		    break;
	    default:printf("INVALID INPUT");
	    
	    
	}
}
