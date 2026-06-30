#include <stdio.h>
#include <string.h>
#define MAX 100

// Write a program to Create bank account system.

typedef struct Bank_acc {
   
    int accNo;
    char name[100];
    float balance;
} Account;

void Create_Acc(Account Bank[], int n);
void Display_Acc(Account Bank[], int n);
void Search_Acc(Account Bank[], int n);
void Deposit_Acc(Account Bank[], int n);
void Withdraw_Acc(Account Bank[], int n);
void Update_Acc(Account Bank[], int n);
void Delete_Acc(Account Bank[], int n);
void Sort_Acc(Account Bank[], int n);




int main(){
int width = 80;
    char heading []= {"~~BANK ACCOUNT MANAGEMENT SYSTEM~~"};
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

       int n;
    printf("Enter no. of bank details user want to enter: ");
    scanf("%d", &n);
    for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");
  
    
    Account Bank[MAX];
    if(n>MAX){
        printf("Not valid data!");
        return 0;
    }


    int choice;

    printf("1. Create Account\n");
    printf("2. Display All Accounts\n");
    printf("3. Search Account\n");
    printf("4. Deposit Money\n");
    printf("5. Withdraw Money\n");
    printf("6. Sort Accounts\n");
    
    printf("7: Exit\n");

    for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");

    do{
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: 
            Create_Acc(Bank,n);
            break;

            case 2 : 
            Display_Acc(Bank,n);
            break;
    
            case 3:
            Search_Acc(Bank, n);
            break;

            case 4:
            Deposit_Acc(Bank, n);
            break;

            case 5:
            Withdraw_Acc(Bank, n);
            break;

            case 6:
            Sort_Acc(Bank, n);
            break;

            case 7:
            printf("Exiting...\n");
            break;

            default : 
            break;
        }
    }while(choice != 7);

    for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s", "EXIT");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
    }

    return 0;
}

void Create_Acc(Account Bank[], int n){
    // int accNo;
    // char name[100];
    // float balance;
    for(int i=0; i<n; i++){
        printf("Enter Account No. : ");
        scanf("%d", &Bank[i].accNo);
        printf("Enter Account Name : ");
        scanf("%s", &Bank[i].name);
        printf("Enter balance : ");
        scanf("%f", &Bank[i].balance);
    }
}
void Display_Acc(Account Bank[], int n){
    int width =80;
for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s", "Bank Records");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");

    for(int i=0; i<n; i++){
        printf("%-20s%d\n", "Acc.No. ", Bank[i].accNo);
        printf("%-20s%s\n", "Acc. Holder Name. ", Bank[i].name);
        printf("%-20s%f\n", "Acc. Balance. ", Bank[i].balance);
         for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n\n");

    }


}
void Search_Acc(Account Bank[], int n){
    int Accno;
    int flag =0;
    printf("Enter Your account number: ");
    scanf("%d", &Accno);

    for(int i=0; i<n; i++){
        if(Accno == Bank[i].accNo){

            flag =1;
            break;
        }
    }
        
    if(flag){
        printf("Found\n");
       
    }else{
         printf("Not found\n");
    }
}
void Deposit_Acc(Account Bank[], int n){
    float amount;
    printf("Enter the amount you want to deposit : ");
    scanf("%f", &amount);

    int Accno;
    int flag =0;
    printf("Enter Your account number: ");
    scanf("%d", &Accno);

    for(int i=0; i<n; i++){
        if(Accno == Bank[i].accNo){
            printf("Found\n");
            Bank[i].balance += amount;
            printf("%20s%f\n", "Updated Balance.", Bank[i].balance);
        
            flag =1;
            break;
        }
    }
        
   
        
if( flag ==0){
    printf("Not found!\n");
}
}
void Withdraw_Acc(Account Bank[], int n){
    float amount;
    printf("Enter the amount you want to withdraw : ");
    scanf("%f", &amount);

    int Accno;
    int flag =0;
    printf("Enter Your account number: ");
    scanf("%d", &Accno);

    for(int i=0; i<n; i++){
        if(Accno == Bank[i].accNo){
            printf("Found\n");
            Bank[i].balance -= amount;
            printf("%20s%f\n", "Updated Balance.", Bank[i].balance);
            flag =1;
            break;
        }
    }
        
    if(flag == 0){
        printf("Not found!\n");
}
}

void Sort_Acc(Account Bank[], int n){
    int choice;
printf("1: Sort by Account name\n2: Sort by Account no.\n ");
scanf("%d", &choice);

int flag =0;

if(choice == 1){
    flag =1;
                // Sort by names
                int i=0, j=0;
         if(strcmp(Bank[i].name,Bank[j].name)>0)
{
    Account temp=Bank[i];
    Bank[i]=Bank[j];
    Bank[j]=temp;
}
}else {
    flag =2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(Bank[j].accNo>Bank[j+1].accNo){
                Account temp = Bank[j+1];
                Bank[j+1]=Bank[j];
                Bank[j]=temp;
            }
        }
    }
}

// to printf sorted data

    if(flag == 1){

        // Sort by names
    printf("Sorted by name\n");
   for(int i=0; i<n; i++){
    printf("%d : %s\n", i+1, Bank[i].name);
    }
    
}else{

    // to print sort by account no.
printf("Sorted by account no.\n");
    for(int  i=0; i<n; i++){
        printf("%d ", Bank[i].accNo);
    }
    printf("\n");
}

}



