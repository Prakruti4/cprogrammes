// copy in string

#include<stdio.h>
#include<string.h>
main()
{
	char str1[30]={"java and python are "};
	char str2[30]={"my favorite"};
	
	char str3[50];
	
	printf("%s",strcpy(str3,str1));
	printf("%s",strcpy(str3,str2));
}
