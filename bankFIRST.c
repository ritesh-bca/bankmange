#include<stdio.h>
int main(){
    print("HELLO EVRYONE I MAKE THE BANK ATM SYSTEM IN C PROGRAMMING LANGUAGE AND I HOPE YOU LIKE IT OR IF YOU HAVE ANY QUESTION OR QUERY YOU CAN ASK ME IN COMMENT SECTION THANK YOU");
    printf("------------------>bank ATM system<----------------\n");
    int pin;
    int money=10000;
    int withdraw;
    int deposit;
    printf("enter the pin :");
    scanf("%d",&pin);
    if(pin==12345){
        printf("pin is correct Welecome to ATM\n");
    }
    else{
        printf("pin is incorrect\n");
    }
    int choice;
    printf("********************************\n");
    printf("* 1. check the balance         *\n");
    printf("* 2. withdraw the money        *\n");
    printf("* 3. deposit the money         *\n");
    printf("* 4. exit                      *\n");
    printf("********************************\n");
    printf("  enter the choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n  your balance is:%d",money);
        break;
    case 2:
       printf(" enter the amount to withdraw:");
       scanf("%d",&withdraw);
       if(withdraw>money){
            printf(" insufficent balance");
       }
       else{
        money = money - withdraw;
        printf(" your balance is:%d",money);
       }
       break;
       case 3:
         printf(" enter the amount to depositL");
         scanf("%d",&deposit);
         money = money + deposit;
         printf(" your balance is :%d",money);
         break;
         case 4:
         printf(" exit the ATM system thank you");
         break;
    default:
         printf(" invalid choice ");
        break;
    }
    printf("\n-----------------WORK SUCCESSFULY-----------------------");
};