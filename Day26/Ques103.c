#include <stdio.h>
#include <string.h>

// Write a program to Create ATM simulation. 

void Check_Balance(float bal, int Pin);
void Deposit_Amount(float *bal, int *Pin);
void Withdraw_Amount(float *bal, int *Pin);
void Change_Pin(int *Pin);
void Mini_Statement(float bal, int Pin);


char Transcation[100][50];
int count = 0;


int main(){

    int width = 80;
    char heading []= {"~~WELCOME TO OUR ATM SERVICES~~"};
    int spaces = (width - strlen(heading))/2;

    for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%*s%s", spaces,  " ", heading);
    printf("\n\n");
   

    for(int i=0; i<width ; i++){
        printf("*");
    }

    printf("\n");

    float balance;
    int PIN, rate;
    char ch;
    printf("%30s","Enter your balance : ");
    scanf("%f", &balance);
    if(balance < 0){
    balance = 0;
    printf("Balance cannot be negative. Setting balance to 0.\n");
    }

    printf("%30s","Enter your pin here: ");
    scanf("%d", &PIN);

    printf("Balance is %f and pin is %d\n", balance , PIN);

    int choice ;
    printf("%-40s%s\n%-40s%s\n%-40s%s\n", "1: CHECK BALANCE", "2: DEPOSIT AMOUNT", "3: WITHDRAW AMOUNT", "4: CHANGE PIN", "5: MINI STATEMENT", "6: EXIT\n");

   
    do{
        printf("Select option from above: ");
        scanf("%d", &choice);
        switch (choice){   
            case 1 : {
                Check_Balance(balance, PIN);
                break; 

            }
            case 2 : {
                Deposit_Amount(&balance, &PIN);
                break;
            }
            case 3 : {
                Withdraw_Amount(&balance, &PIN);
                break;
            }
            case 4 : {
                Change_Pin(&PIN);
                break;
            }
            case 5 : {
                Mini_Statement(balance, PIN);
                break;
            }
            case 6 : {
                printf("Exiting...\n");
                break;
            }
            default : {
                
                     printf("Invalid Choice!\n");

                break;
            }
        }
       
        
    }while(choice != 6);

    

     printf("%40s\n\n","THANK YOU VISITING US!");
    printf("Would you like to rate us?(Y/N) : ");
        scanf(" %c", &ch);
        if(ch == 'y' || ch == 'Y'){
            printf("Rate us from 1 to 10: ");
            scanf("%d", &rate);
            printf("You rated us %d.\nThanks for your rating.\n", rate);
        }
        
        for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s%s\n", "EXIT");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
    }
   

}

void Check_Balance(float bal, int Pin){
        int pin;
    printf("%20s", "ENTER YOUR PIN: ");
    scanf("%d", &pin);

    if(pin == Pin){
                
    printf("%40s", "YOUR CURRENT BALANCE IS : ");
    printf("%f\n", bal);  

        
    }
    else{
        printf("%20s","INCORRECT PIN!!\n");
    }
}

void Deposit_Amount(float *bal, int *Pin){
    float deposit;
    int pin;
    printf("%20s", "ENTER YOUR PIN: ");
    scanf("%d", &pin);

    if(pin == *Pin){
        printf("%20s","ENTER THE AMOUNT TO DEPOSIT : ");
        scanf("%f", &deposit);
        
    }
    else{
        printf("INCORRECT PIN!!\n");
    }

    if(deposit > 0){
    *bal += deposit;
}else{
    printf("Invalid amount!\n");
}
    printf("%40s", "YOUR UPDATED BALANCE : ");
    printf("%f\n", *bal);

    sprintf(Transcation[count], "Deposited: %.2f", deposit);
    count++;

}

void Withdraw_Amount(float *bal, int *Pin){
    float withdraw;
    int pin;
    printf("%20s", "ENTER YOUR PIN: ");
    scanf("%d", &pin);

    if(pin == *Pin){
        printf("%20s","ENTER THE AMOUNT TO WITHDRAW : ");
        scanf("%f", &withdraw);
        
    }
    else{
        printf("INCORRECT PIN!!\n");
    }

    if(withdraw > *bal){
        printf("%40s", "INSUFFICIENT BALANCE!!");
    }else if(withdraw <= 0){
    printf("Invalid amount.\n");
    return;
}
    else{
        *bal = *bal - withdraw;
    }
    
    
    printf("%40s", "YOUR UPDATED BALANCE : ");
    printf("%f\n", *bal);

    sprintf(Transcation[count], "Withdrawn: %.2f", withdraw);
    count++;

}
void Change_Pin(int *Pin){
    int old_pin, new_pin;

printf("Enter current PIN: ");
scanf("%d",&old_pin);

if(old_pin == *Pin){
    printf("Enter new PIN: ");
    scanf("%d",&new_pin);
    *Pin = new_pin;
    printf("PIN changed successfully.\n");
}
else{
    printf("Incorrect PIN.\n");
}
    printf("%40s","YOUR PIN HAS BEEN CHANGED SUCCESSFULLY !!");
}

void Mini_Statement(float bal, int Pin){
    int old_pin;
    printf("%20s", "ENTER YOUR PIN: ");
    scanf("%d", &old_pin);
    if(old_pin != Pin){
        printf("INCORRECT PIN!!\n");
        return;
    }

if(count <10){
    for(int i=0; i<count; i++){
        printf("%s\n", Transcation[i]);
    } 
}else{
        for(int i= count-10; i<count ; i++){
            printf("%s\n", Transcation[i]);
        }
    }
}

