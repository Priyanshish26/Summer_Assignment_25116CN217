#include <stdio.h>
#include <string.h>
#define MAX 100

// Write a program to Create ticket booking system.

typedef struct Contact_num
{
    int phone_num;
    char Name[100];
    
} C_num;


void Add_Phone(C_num CN[], int n){
    for(int i=0; i<n; i++){
        printf("Enter PHONE NO: ");
        scanf("%d", &CN[i].phone_num);
        printf("Enter name: ");
        scanf(" %[^\n]", CN[i].Name);

    }
}
void Display_Phone(C_num CN[], int n){

    int width =80;
for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s", "Ticket Records");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");

    for(int i=0; i<n; i++){
        printf("%-20s%s\n", "Name : ", CN[i].Name);
        printf("%-20s%d\n", "Phone no: ", CN[i].phone_num);
        
        
             for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");
    }
}
void Search_Phone(C_num CN[], int n){
    int phoneno;

    int flag=0;
    printf("Enter Phone number: ");
    scanf("%d", &phoneno);

    for(int i=0; i<n; i++){
        if(phoneno == CN[i].phone_num){
            printf("Found ticket\n");
            flag =1;
            break ;
        }
    }
    if(flag == 0){
        printf("Not found\n");
    }
}

int main(){
int width = 80;
    char heading []= {"~~CONTACT MANAGEMENT SYSTEM~~"};
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
    printf("Enter no. of CONTACT details user want to enter: ");
    scanf("%d", &n);
    for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");
  
    
    C_num CN[MAX];
    if(n>MAX){
        printf("Not valid data!");
        return 0;
    }


    int choice;

    printf("1. ADD CONTACT NO: \n");
    printf("2. DISPLAY CONTACT NO: \n");
    printf("3. SEARCH CONTACT NO:\n");
    
    printf("4: Exit\n");

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
            Add_Phone(CN,n);
            break;

            case 2 : 
            Display_Phone(CN, n);
            break;
    
            case 3:
            Search_Phone(CN, n);
            break;


            case 4:
            printf("Exiting...\n");
            break;

            default : 
            printf("Invalid choice\n");
            break;
        }
    }while(choice != 4);

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

