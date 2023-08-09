#include<stdio.h>
int main(){
	
	int choose,quantity,amount,pizzaprice=180,burgerprice=100,dosaprice=120,idliprice=50;
	
	//select menu
	printf("1.Pizza\t\tprice = 180rs/pcs\n");
	printf("2.Burger\tprice = 100rs/pcs\n");
	printf("3.Dosa\t\tprice = 120rs/pcs\n");
	printf("4.Idli\t\tprice = 50rs/pcs\n");
	
	//enter your choice
	printf("\nPlease Enter your choose.... : ");
	scanf("%d",&choose);
	
	//Enter number(1-4) and show item , how much quantity , food price and total show in this part
	switch(choose)
	{
				case 1: printf("\n\nYou have selected Pizza.");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					amount=quantity*pizzaprice;
					printf("\namount is :%d",amount);
					printf("\nTotal amount is : %d",amount);
				
				break;
				
				case 2: printf("\n\nYou have selected Burger.");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					amount=quantity*burgerprice;
					printf("\namount is :%d",amount);
					printf("\nTotal amount is : %d",amount);
				
				break;
				
				case 3: printf("\n\nYou have selected Dosa.");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					amount=quantity*dosaprice;
					printf("\namount is :%d",amount);
					printf("\nTotal amount is : %d",amount);
				
				break;
				
				case 4: printf("\n\nYou have selected Idli");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					amount=quantity*idliprice;
					printf("\namount is :%d",amount);
					printf("\nTotal amount is : %d",amount);
				
				break;
			default:
				printf("\n\nPlease enter valid item number");
		
	}
	
	char y,n;
	int total;
	
	//for order repetation
	printf("\n Do you want palce more orders ? y & n : ");
	scanf("%c %c",&y,&n);
	
	switch(y,n)
	{
		case 'y':
				printf("----------menu----------");
				printf("1.Pizza\t\tprice = 180rs/pcs\n");
				printf("2.Burger\tprice = 100rs/pcs\n");
				printf("3.Dosa\t\tprice = 120rs/pcs\n");
				printf("4.Idli\t\tprice = 50rs/pcs\n");
				
				printf("\nPlease Enter your choose.... : ");
				scanf("%d",&choose);
				
		switch(choose)
	{
				case 1: printf("\n\nYou have selected Pizza.");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					total=quantity*pizzaprice;
					printf("\namount is :%d",total);
					printf("\nTotal amount is : %d",total);
				
				break;
				
				case 2: printf("\n\nYou have selected Burger.");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					total=quantity*burgerprice;
					printf("\namount is :%d",total);
					printf("\nTotal amount is : %d",total);
				
				break;
				
				case 3: printf("\n\nYou have selected Dosa.");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					total=quantity*dosaprice;
					printf("\namount is :%d",total);
					printf("\nTotal amount is : %d",amount);
				
				break;
				
				case 4: printf("\n\nYou have selected Idli");
					printf("\nEnter the quantity : ");
					scanf("%d",&quantity);
					total=quantity*idliprice;
					printf("\namount is :%d",total);
					printf("\nTotal amount is : %d",total);
					
				default:
					printf("Please select from this menu");
	}
			break;
			
			case 'n':
				printf("Thank you for visit");
				
	}
	
	//total bill
	int grandtotal;
	
	grandtotal=amount+total;
	printf("\nTotal Amount is = %d",grandtotal);
	printf("\n Do you want palce more orders ? y & n : ");
	return 0;
}
