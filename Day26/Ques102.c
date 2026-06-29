#include <stdio.h>
#include <string.h>

// Write a program to Create voting eligibility system.

int main(){
    int secret_num , guess, score =0, attempt = 0, difference;

    int width = 80;
    char heading []= {"~~WELCOME TO VOTING ELIGIBILITY SYSTEM~~"};
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


    int age;
    char ch;
    int rate;
    do{
        printf("PLEASE ENTER YOUT AGE HERE : ");
        scanf("%d", &age);

        if(age>=18){
            printf("%30s\n","You can vote!\n");
            printf("%30s\n","VOte wisely.\n");
        }else{
            printf("You cann't vote now!\n");
        }
        printf("Would you like to check for other?(Y/N)\n");
        scanf(" %c", &ch);
        if(ch == 'N' || ch == 'n'){
            break;
        }


    }while(1);

    printf("%40s\n\n","THANK YOU VISITING US!");
    printf("Would you like to rate us?(Y/N) : ");
        scanf(" %c", &ch);
        if(ch == 'y' || ch == 'Y'){
            printf("Rate us from 1 to 10:");
            scanf("%d", &rate);
            printf("You rated us %d\n.Thanks for your rating.\n", rate);
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
   

    return 0;
    }

