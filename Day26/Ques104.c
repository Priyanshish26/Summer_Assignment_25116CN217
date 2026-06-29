#include <stdio.h>
#include <string.h>
#include <ctype.h>


// Write a program to Create quiz application. 

void Instruction();
void Quiz();

int main(){
   
    int width = 80;
    char heading []= {"~~QUIZ APPLICATION~~"};
    int spaces = (width - strlen(heading))/2;

    int choice, rate;
    char ch;

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

    printf("%s\n%s\n%s\n","1: INSTRUCTIONS", "2: START QUIZ", "3: EXIT:");

    do{
        if(scanf("%d",&choice)!=1)
{
    printf("Invalid input\n");
    break;
}
        
        switch(choice){
            case 1 : {
                
                Instruction();
                break;
            }
            case 2 : {
                Quiz();
                break ;
            }
            case 3 : {
                printf("Exiting...\n");
                break;
            }
            default : {
                printf("Invalid choice!");
                break ; 
        }
        }
    }while(choice != 3);

    printf("%40s\n\n","THANK YOU VISITING US!");
    
        for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s\n", "EXIT");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
     }
    return 0;
}

void Instruction(){

    printf("%40s%40s\n", "************","INSTRUCTIONS");
    printf("1: Read all questions carefully.\n2: For every correct answer, 4 marks will be awarded.\n3: For every wrong answer, -1 mark will be deducted\n4: Enter only one character.\n");
}
void Quiz(){
        FILE *Fptr;
    char line[200];

    char *ques, *opA, *opB, *opC, *opD, *ans, user_ans;
    int score=0 , attempted = 0, total = 0;
    Fptr = fopen("Quiz.txt", "r");

    if(Fptr == NULL){
        printf("No such file exists.\n");
        return ;
    }

    while(fgets(line, sizeof(line), Fptr) != NULL){
        line[strcspn(line, "\n")] = '\0';
        ques = strtok(line, "|");
        opA = strtok(NULL, "|");
        opB = strtok(NULL, "|");
        opC = strtok(NULL, "|");
        opD = strtok(NULL, "|");
        ans = strtok(NULL, "|");

        // if(ques == NULL || ans == NULL)
        // continue;

        printf("\nQues %s\n", ques);
        printf("%s\n", opA);
        printf("%s\n", opB);
        printf("%s\n", opC);
        printf("%s\n", opD);

        printf("Your answer : ");
        scanf(" %c", &user_ans);

        user_ans = toupper(user_ans);
        if(user_ans== toupper(ans[0])){
            printf("Correct!\n");
            score +=4;
        }else{
            printf("Wrong!\n");
            score -=1;
        }

        total +=4;
        attempted++;
    }

    fclose(Fptr);
    printf("You attempted %d questions.\n", attempted);
    printf("YOU SCORED %d/%d\n", score, total);
    
}

