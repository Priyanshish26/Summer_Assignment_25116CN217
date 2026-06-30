
#include <stdio.h>
#include <string.h>
#define MAX 100
// Write a program to Create library management system. 

typedef struct Library
{
    int bookId;
    char title[100];
    char author[100];
    float price;
    int quantity;
} Book;


void Add_Book(Book LB[], int n);
void Display_Book(Book LB[], int n);
void Search_Book(Book LB[], int n);
void Sort_Book(Book LB[], int n);


int main(){
    int width = 80;
    char heading []= {"~~LIBRARY MANAGEMENT SYSTEM~~"};
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

    int choice;

    printf("1: Add Book\n");
    printf("2: Display Book\n");
    printf("3: Search Book\n");
    printf("4: Sort Book\n");
    printf("5: Exit\n");

    for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n");
     int n;
    
    printf("Enter no. of book user want to enter: ");
    scanf("%d", &n);
    Book Lib[MAX];
    if(n>MAX){
        printf("Not valid data!");
        return 0;
    }

    printf("\n");

        
    do{
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1 : {
            Add_Book(Lib ,n);
            break;
        }
        case 2 : {
            Display_Book(Lib ,n);
            break;
        }
        case 3 : {
            Search_Book(Lib ,n);
            break;
        }
        case 4 : {
            Sort_Book(Lib ,n);
            break;
        }
        
        
        case 5 : {
            printf("Exiting..\n");
            break;
        }
        
        
        default:
        printf("Invalid choice:\n");
            break;
        }
    }while(choice != 5);

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

void Add_Book(Book LB[], int n){
    
for(int i=0; i<n; i++){
        printf("Enter bookId ");
        scanf("%d", &LB[i].bookId);
        printf("Enter BOOK title: ");
        scanf("%s", &LB[i].title);
        printf("Enter author name: ");
        scanf("%s", &LB[i].author);
         printf("Enter price: ");
        scanf("%f", &LB[i].price);
        printf("Enter quantity ");
        scanf("%d\n", &LB[i].quantity);
}
}
void Display_Book(Book LB[], int n){
    

    int width =80;
for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s", "Library Records");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");


    for(int i=0; i<n; i++){
        printf("%20s%d\n", "BOOK-ID : ", LB[i].bookId);
        printf("%20s%s\n", "BOOK-title : ", LB[i].title);
        printf("%20s%s\n", "BOOK-author : ", LB[i].author);

        printf("%20s%f\n", "BOOK-price : ", LB[i].price);
        printf("%20s%d\n", "BOOK-quantity : ", LB[i].quantity);
         for(int i=0; i<width ; i++){
        printf("-");
    }
    printf("\n\n");

    }

}
void Search_Book(Book LB[], int n){
    int choice;
printf("1: Search by Book name\n2: Search by Book Id\n");
scanf("%d", &choice);

// Search by Book Name 
if(choice == 1){
    char book[100];
    printf("Enter Book name : ");
    scanf("%s", &book);
    for(int i=0; i<n; i++){
        if(book == LB[i].title){
            printf("Book found\n");
        }else{
            printf("Book not found\n");
        }
    }
}else{
    int id;
    printf("Enter book id: ");
    scanf("%d", &id);
    for(int i=0; i<n; i++){
        if(id==LB[i].bookId){

    printf("Book found\n");
        }else{
            printf("Book not found\n");
        }
    }
}
}


void Sort_Book(Book LB[], int n){

    int choice;
printf("1: Sort by Book name\n2: Sort by Book Id\n3: Sort by Book price ");
scanf("%d", &choice);

int flag =0;

if(choice == 1){
    flag =1;
                // Sort by names
                int i=0, j=0;
         if(strcmp(LB[i].title,LB[j].title)>0)
{
    Book temp=LB[i];
    LB[i]=LB[j];
    LB[j]=temp;
}
}else if(choice == 2){
    flag =2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(LB[j].bookId>LB[j+1].bookId){
                Book temp = LB[j+1];
                LB[j+1]=LB[j];
                LB[j]=temp;
            }
        }
    }
}else{
    flag = 3;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(LB[j].price>LB[j+1].price){
                Book temp = LB[j+1];
                LB[j+1]=LB[j];
                LB[j]=temp;
            }
        }
    }
}

// to printf sorted data

    if(flag == 1){

        // Sort by names
    printf("Sorted by name\n");
   for(int i=0; i<n; i++){
    printf("%d : %s\n", i+1, LB[i].title);
    }
    
}else if(flag == 2){

    // to print sort by book id
printf("Sorted by bookId\n");
    for(int  i=0; i<n; i++){
        printf("%d ", LB[i].bookId);
    }
    printf("\n");
}else{
    printf("Sorted by price\n");
    for(int  i=0; i<n; i++){
        printf("%f ", LB[i].price);
    }
    printf("\n");
}


}
