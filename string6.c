// compare in string

#include<stdio.h>
main()
{
	char s1[30];
	char s2[40];
	
	printf("enter one string: ");
	scanf("%s",&s1);
	
	printf("enter second string: ");
	scanf("%s",&s2);
	
	if(strcmp(s1,s2)==0)
	{
		printf("string is equal");
	}
	else
	{
			printf("string is not equal");
	}
}
