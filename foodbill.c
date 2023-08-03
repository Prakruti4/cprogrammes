#include<stdio.h>
int main()
{
	int choice,quantity,amount;
	char addanother;
	do
	{
	
	printf("................MENU....................... \n");
	printf("1.Pizza                180rs/pcs\n");
	printf("2.Burger               100rs/pcs\n");
	printf("3.Dosa                 120rs/pcs\n");
	printf("4.Idli                 50rs/pcs\n");
	
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	printf("\n\n");
	
	switch(choice)
	{
		
		case 1: printf("You have selected pizza.. \n");
		        printf("Enter the quantity: ");
		        scanf("%d",&quantity);
		        amount=quantity*180;
		        printf("Amount: %d  \n",amount);
		        printf("Total amount is: %d \n",amount);
		  break;      
		 case 2: printf("You have selected burger.. \n");
		        printf("Enter the quantity: ");
		        scanf("%d",&quantity);
		        amount=quantity*100;
		        printf("Amount: %d  \n",amount);
		        printf("Total amount is: %d \n",amount);       
		   break;     
		 case 3: printf("You have selected dosa.. \n");
		        printf("Enter the quantity: ");
		        scanf("%d",&quantity);
		        amount=quantity*120;
		        printf("Amount: %d  \n",amount);
		        printf("Total amount is: %d \n",amount);       
		  break;      
		        
		 case 4: printf("You have selected idli.. \n");
		        printf("Enter the quantity: ");
		        scanf("%d",&quantity);
		        amount=quantity*50;
		        printf("Amount: %d  \n",amount);
		        printf("Total amount is: %d \n",amount);       
		        
	}
	 printf("Do you want to place more order? y/n:  \n ");
	 addanother=getch();
	 
    }
     while(addanother == 'y'|| addanother == 'Y');
}
