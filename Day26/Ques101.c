#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Write a program to Create number guessing game. 

int main(){
    int secret_num , guess, score =0, attempt = 0, difference;

    int width = 80;
    char heading []= {"WELCOME TO NUMBER GUESSING GAME"};
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

    srand(time(NULL));

    secret_num = (rand()%100) + 1;



    do{
        printf("ENTER YOUR GUESS: ");
        scanf("%d", &guess);

        attempt ++;
        
        if(guess > secret_num){
            printf("%30s\n%30s\n","TOO HIGH!" " Try again.");
            
        }else if(guess < secret_num){
            printf("%30s\n%30s\n","TOO SMALL!""Try again.");

        }else{
            for(int i=0; i<width/2; i++){
                printf("*");
            }
            printf("\n");
            printf("%20s\n","HURRAY! YOU WON!");
            for(int i=0; i<width/2; i++){
                printf("*");
            }
            printf("\n");
    
           printf("You Guessed it right!\n");
            score = 100 - (attempt*10);
            printf("You guessed it in %d attempts.\n", attempt);
            printf("Your score is %d.\n", score);
        }
    }while(guess != secret_num);
    

    return 0;
}