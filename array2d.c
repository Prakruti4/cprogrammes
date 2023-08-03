/*  1 2    1 2      2 4
    1 2  + 1 2  =   2 4  */
    
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;   // i=row  j=column
	
	printf("Enter one matrix:  \n");
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("one matrix elements are:  \n");
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
		printf("Enter second matrix:  \n");
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("second matrix elements are:  \n");
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	
	 printf("Addition of two matric are: \n");
	 
	 for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
