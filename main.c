#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void mainmenu();
void customer(void);
void ordersnack(void);

int main()

{
    mainmenu();
    return 0;
}
void mainmenu(void)
{
    printf("\ .......................................................................\n");
    printf("\t\tWELCOME TO SMOKEYS CAFE\n");
    printf("\n\t........................................................................\n");
    printf("\n\t1.CUSTOMER SECTION\n\t2.ABOUT THE PROJECT\n\t3.EXIT\n\tEnter your selection__");
    printf("\n\t........................................................................\n");

    int select;
    scanf("%d",&select);
    if(select==1)
    {
     customer();
      
      if(getch())
      	mainmenu();
    }
    else if(select==2)
    {
        printf("aboutproject();");
        if(getch())
      	mainmenu();
    }
    else if (select==3)
    {
    	system("cls");
    	printf("\n\n\n");
        printf("\t\t\tTHANK YOU");
        if(getch())
      	mainmenu();
        exit(0);
    }
}
void customer(void)
{
 system("cls");	
 printf("\tYOU ARE ABOUT TO ORDER SNACK-->\n\t1.Order Snack\n\t2.View Order\n\t3.Back to Main Menu\n\n\tEnter Your selection");
 
 int c;
 scanf("%d",&c);
 
 int load;
 for(load=0;load<=5000;load++)
 {
 	printf("\r loading.... :%d ",load/50 );
 }
 
 if(c==1)
 {
 	system ("cls");
 	ordersnack();
 }	
 else if(c==2)
 {
 	system("cls");
 	printf("vieworder();");
 }
 else if(c==3)
 {
 	system("cls");
 	mainmenu();
 }
 else 
 {
 	printf("wrong input");
 	customer();
 }
 	
}
void ordersnack(void)

{
	int choice;
	int again;
	int quantity;
	printf("\n\n\tSNACK MENU\n");
	printf("\tINPUT NUMBER FOR SELECTED MENU\n\n\t#1 FRIES\n\t#2BURGER\t\n\tEnter your choice--> ");
	
	
}

