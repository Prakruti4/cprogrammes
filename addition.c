#include<stdio.h> //header file
int main() //main() --- main funtion
{
	int a,b,add;    //(a,b,add are variable and int is datatype)
	printf("Enter one number:  \n");  //output statement   \n--- curser down
	scanf("%d",&a);  // scanf --- input statement which we write
	
	printf("Enter second number:  \n"); 
	scanf("%d",&b);  //&-- address  %--format specifier
	
	add=a+b;  //statement
	
	printf("Total of a and b is: %d",add);
}
