#include <stdio.h>
#include <string.h> 

// Write a program to Create menu-driven calculator. 

int main(){
    int width = 80;
    char heading []= {"*CALCULATOR*"};
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

    char ch;
    int A, B;
    
        
    do{
        printf("Enter operator(# To exit): ");
    scanf(" %c", &ch);
        printf("Enter Two Number: ");
    scanf("%d%d", &A, &B);
    
        
        switch (ch)
        {
        case '+' : {
            printf("Sum = %d", A+B);
            break;
        }
        case '-' : {
             printf("Difference = %d", A-B);
            break;
        }
        case '/' : {
            if(B==10){
                printf("ERROR!");
            }else{
                printf("Division = %f", A/(float)B);
            }
             
            break;
        }
        case '*' : {
             printf("Product = %d", A*B);
            break;
        }
        
        case '%' : 
        if(B==10){
                printf("ERROR!");
            }else{
                printf("Remainder = %d", A%B);
            }
         
         break;
         case '#' : {
            printf("Exiting..\n");
            break;
        }
        
        
        default:
        printf("Invalid choice:\n");
            break;
        }
    }while(ch != '#');

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