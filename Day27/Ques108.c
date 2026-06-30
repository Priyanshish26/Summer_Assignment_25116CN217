#include <stdio.h>
#include <string.h>
#define MAX 100

//Write a program to Create marksheet generation system. 

typedef struct Students{
    int rollno ;
    char name[100];
    float Marks[10];
    float total;
    float percentage;
    char grade;

    
}stu ;


void Add_Student( stu S1[], int n);
void Display_Students(stu S1[],int n);


int main(){
    

    int width = 80;
    char heading []= {"~~MARKSHEET GENERATION SYSTEM~~"};
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



    int choice ;

    printf("%s\n%s\n%s\n", "1: Add Student","2: Display Student", "3: EXIT");
    for(int i=0; i<width ; i++){
        printf("*");
    }
    

    printf("\n");

        int n;
    
    printf("Enter no. of students user want to enter: ");
    scanf("%d", &n);
    stu S1[MAX];
    if(n>MAX){
        printf("Not valid data!");
        return 0;
    }
 
    do{
        printf("Enter option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1 : {
                Add_Student(S1, n);
                break;
            }
            case 2 : {
                Display_Students(S1, n);
                break;
            }
            
            case 3 : {
                printf("Exiting...\n");
                break;
            }
            
            default : {
                printf("Invalid choice !");
                break;
            }
        }
    }while(choice != 3);

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

void Add_Student( stu S1[], int n){
    

    for(int i=0; i<n; i++){
        printf("Enter roll no. ");
        scanf("%d", &S1[i].rollno);
        printf("Enter name: ");
        scanf("%s", S1[i].name);
        printf("Enter Marks of 5 subjects:\n");
        for(int j=0; j<5; j++){
            scanf("%f",&S1[i].Marks[j]);
        }
        S1[i].total = 0;
        for(int j=0; j<5; j++){
            S1[i].total += S1[i].Marks[j];
        }
        S1[i].percentage = (S1[i].total / 500)*100;
        if(S1[i].percentage <=100 && S1[i].percentage>90){
            S1[i].grade = 'A';
        }else if(S1[i].percentage <=90 && S1[i].percentage>80){
            S1[i].grade = 'B';
        }else if(S1[i].percentage <=80 && S1[i].percentage>70){
            S1[i].grade = 'C';
        }else{
            S1[i].grade = 'D';
        }

    }
}

void Display_Students(stu S1[],int n){
    
    int width = 80;
    char heading[] = {"STUDENT MARKSHEET"};
    int spaces = (width - strlen(heading))/2;

    int Roll;
    printf("Enter your Roll no: ");
    scanf("%d", &Roll);

    int i;
    int True =0;
    for(i=0; i<n; i++){
        if(S1[i].rollno == Roll){
            True =1;
            
            for(int j=0; j<width; j++){
                printf("-");
            }
            printf("\n");
            printf("%*s%s", spaces ," ", heading);
            printf("\n");

            for(int j=0; j<width; j++){
            printf("-");
            }

            printf("\n");

             printf("ROLL NO.: %d\n", S1[i].rollno);
             printf("NAME: %s\n\n", S1[i].name);
            
             printf("%-20s%s\n", "Subject", "Marks");
             for(int i=0; i<50; i++){
                printf("-");
            }
            printf("\n");
                printf("%-20s%f\n%-20s%f\n%-20s%f\n%-20s%f\n%-20s%f\n", "ENGLISH", S1[i].Marks[0], "MATHS", S1[i].Marks[1], "PHYSICS", S1[i].Marks[2], "CHEMISTRY", S1[i].Marks[3], "COMPUTER",S1[i].Marks[4] );

                for(int i=0; i<50; i++){
                printf("-");
                }
                printf("\n");

                printf("%-20s%f\n%-20s%f\n%-20s%c\n", "TOTAL", S1[i].total, "PERCENTAGE", S1[i].percentage, "GRADE", S1[i].grade);

                for(int i=0; i<50; i++){
                printf("-");
                }
                 printf("\n");


                if(S1[i].Marks[0] < 33 || S1[i].Marks[1] < 33 ||S1[i].Marks[2] < 33 ||S1[i].Marks[3] < 33 ||S1[i].Marks[4] < 33 ){
                    printf("%-20s%s\n",  "RESULT", "FAIL");
                }else{
                    printf("%-20s%s\n",  "RESULT", "PASS");
                }
             break;
        }
    }
    if(True ==0){
        printf("%20s\n","NO MATCH FOUND");
    }
  
}

