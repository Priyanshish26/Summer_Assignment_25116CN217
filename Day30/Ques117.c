#include <stdio.h>
#include <string.h>
#define MAX 100

// Write a program to Create student record system using arrays and strings. 

typedef struct Students{
    int rollno ;
    char name[100];
    char gender;
    char Course[50];
    int sem;
    float Marks[10];
    float total;
    float percentage;
    char grade;

    
}stu ;

void Add_Student( stu S1[], int n);
void Sort_Student(stu S1[], int n);
void Display_Students(stu S1[],int n);
void Search_Student(stu S1[], int n);
void Update_Student(stu S1[], int n);




int main(){
    

    int width = 80;
    char heading []= {"~~STUDENT RECORD MANAGEMENT SYSTEM~~"};
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

    printf("%-20s%s\n%-20s%s\n%-20s%s\n", "1: Add Student","2: Sort Student", "3: Display Student", "4: Search Student", "5: Update Student", "6: EXIT");
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
                Sort_Student(S1, n);
                break;
            }
            case 3 : {
                Display_Students(S1, n);
                break;
            }
            case 4 : {
                Search_Student(S1, n);
                break;
            }
            case 5 : {
                Update_Student(S1,n);
                break;
            }
            case 6 : {
                printf("Exiting...\n");
                break;
            }
            
            default : {
                printf("Invalid choice !");
                break;
            }
        }
    }while(choice != 6);

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
        printf("Enter gender (M/F/O): ");
        scanf(" %c", &S1[i].gender);
        printf("Enter current course: ");
        scanf("%s", S1[i].Course);
        printf("Enter semester:");
        scanf("%d", &S1[i].sem);
        printf("Enter Marks of 3 subjects:\n");
        for(int j=0; j<3; j++){
            scanf("%f",&S1[i].Marks[j]);
        }
        S1[i].total = 0;
        for(int j=0; j<3; j++){
            S1[i].total += S1[i].Marks[j];
        }
        S1[i].percentage = (S1[i].total / 300)*100;
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

void Sort_Student(stu S1[], int n){
    
    
    int choice;
    int flag=0;
    printf("How would you like to Sort\n1: Name\n2:Roll no:");
    scanf("%d", &choice);
    if(choice == 1){
        flag =1;
                // Sort by names
                int i=0, j=0;
         if(strcmp(S1[i].name,S1[j].name)>0)
{
    stu temp=S1[i];
    S1[i]=S1[j];
    S1[j]=temp;
}
}else{
        // Sort by roll no
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(S1[j].rollno>S1[j+1].rollno){
                stu temp = S1[j+1];
                S1[j+1]=S1[j];
                S1[j]=temp;
            }
        }
    }
    }

    // to print Sorted Data

    if(flag){

        // Sort by names
    printf("Sorted by name\n");
   for(int i=0; i<n; i++){
    printf("%d : %s\n", i+1, S1[i].name);
    }
    
}else{

    // to print sort by roll no.
printf("Sorted by roll no \n");
    for(int  i=0; i<n; i++){
        printf("%d ", S1[i].rollno);
    }
    printf("\n");
}


}

void Display_Students(stu S1[],int n){
    int k;
    printf("Enter number of students user want to display: ");
    scanf("%d", &k);
    if(k>n)
    k=n;

    int width = 150;
    char heading[] = {"Display Students"};
    int spaces = (width - strlen(heading))/2;

    for(int i=0; i<width; i++){
        printf("*");
    }
    printf("\n");
    printf("%*s%s", spaces ," ", heading);
    printf("\n");

    for(int i=0; i<width; i++){
        printf("*");
    }

    printf("\n");

    printf("%-5s %-10s %-20s %-8s %-15s %-5s %-10s %-10s %-5s\n", "Sr","Roll","Name","Gender","Course","Sem","Total","Percent","Grade");

    for(int i=0; i<k; i++){
        printf("%-5d%-10d %-20s %-8c %-15s %-5d %-10f %-10f %-5c\n", i+1, S1[i].rollno, S1[i].name, S1[i].gender, S1[i].Course, S1[i].sem, S1[i].total, S1[i].percentage, S1[i].grade);
    }
}

void Search_Student(stu S1[], int n){
    int Roll;
    int True =0;
    printf("Enter roll no. to search: ");
    scanf("%d", &Roll);

    int i;
    for(i=0; i<n; i++){
        if(S1[i].rollno == Roll){
            printf("Student Found");
            True =1;
            break;
        }
    }

    if(True == 1){
     printf("%-5d%-10d %-20s %-8c %-15s %-5d %-10f %-10f %-5c\n", i+1, S1[i].rollno, S1[i].name, S1[i].gender, S1[i].Course, S1[i].sem, S1[i].total, S1[i].percentage, S1[i].grade);
}
else{
    printf("Student not found");
}
}

void Update_Student(stu S1[], int n){

    int roll;
    int True =0;
    printf("Enter the roll no. user want to update: ");
    scanf("%d", &roll);

    int i;
    for(i=0; i<n; i++){
        if(S1[i].rollno == roll){
            True =1;
            break;
        }
    }

    if(True == 1){
        printf("\nEnter new name: ");
            scanf("%s", S1[i].name);
            printf("\nEnter new marks: ");
            for(int j=0;j<3;j++)
            {
                scanf("%f",&S1[i].Marks[j]);
            }
            S1[i].total = 0;
        for(int j=0; j<3; j++){
            S1[i].total += S1[i].Marks[j];
        }
        S1[i].percentage = (S1[i].total / 300)*100;
        if(S1[i].percentage <=100 && S1[i].percentage>90){
            S1[i].grade = 'A';
        }else if(S1[i].percentage <=90 && S1[i].percentage>80){
            S1[i].grade = 'B';
        }else if(S1[i].percentage <=80 && S1[i].percentage>70){
            S1[i].grade = 'C';
        }else{
            S1[i].grade = 'D';
        }
            printf("Student record updated successfully.\n");
    }else{
        printf("Student not found");
    }
    
}

