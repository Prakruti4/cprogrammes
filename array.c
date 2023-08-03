#include<stdio.h>
 main()
{
	int arr[5];   // 0 to 5
	int i;
	printf("Enter your array:  \n");
	
    for(i=1;i<7;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=1;i<7;i++)
	{
	    printf("%d\t",arr[i]);	
	}
}
