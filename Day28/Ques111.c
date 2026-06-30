#include <stdio.h>
#include <string.h>
#define MAX 100

// Write a program to Create ticket booking system.

typedef struct Ticketbook
{
    int ticketId;
    char passengerName[100];
    char source[50];
    char destination[50];
    char travelDate[20];
    int seatNo;
    float price;    
} Ticket;


void Book_Ticket(Ticket TT[], int n){
    for(int i=0; i<n; i++){
        printf("Enter TicketId: ");
        scanf("%d", &TT[i].ticketId);
        printf("Enter Passenger name: ");
        scanf(" %[^\n]", TT[i].passengerName);
        printf("Enter source: ");
        scanf(" %[^\n]", TT[i].source);
        printf("Enter Destination: ");
        scanf(" %[^\n]", TT[i].destination);
        printf("Enter Travel date: ");
        scanf(" %[^\n]", TT[i].travelDate);
        printf("Enter seatno.: ");
        scanf("%d", &TT[i].seatNo);
        printf("Enter price: ");
        scanf("%f", &TT[i].price);
    }
}
void Display_Ticket(Ticket TT[], int n){

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
        printf("%-20s%s\n", "Passenger name", TT[i].passengerName);
        printf("%-20s%d\n", "Ticket Id", TT[i].ticketId);
        printf("%-20s%s\n", "Source", TT[i].source);
        printf("%-20s%s\n", "Destination", TT[i].destination);
        printf("%-20s%s\n", "Travel Date", TT[i].travelDate);
        printf("%-20s%d\n", "Seat no.", TT[i].seatNo);
        printf("%-20s%f\n", "Price", TT[i].price);

             for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");
    }
}
void Search_Ticket(Ticket TT[], int n){
    int Ticketno;

    int flag=0;
    printf("Enter Ticket number: ");
    scanf("%d", &Ticketno);

    for(int i=0; i<n; i++){
        if(Ticketno == TT[i].ticketId){
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
    char heading []= {"~~TICKET BOOKING SYSTEM~~"};
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
    printf("Enter no. of TICKET details user want to enter: ");
    scanf("%d", &n);
    for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");
  
    
    Ticket TT[MAX];
    if(n>MAX){
        printf("Not valid data!");
        return 0;
    }


    int choice;

    printf("1. Book Ticket\n");
    printf("2. Display Ticket\n");
    printf("3. Search Ticket\n");
    
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
            Book_Ticket(TT, n);
            break;

            case 2 : 
            Display_Ticket(TT, n);
            break;
    
            case 3:
            Search_Ticket(TT, n);
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