#include <stdio.h>
#include <string.h>
#define MAX 100

// Write a program to Create salary management system. 

typedef struct Employee{
    int empID ;
    char name[100];
    char gender;
    int Salary;
    

    
}emp;

void Add_employee( emp E1[], int n);
void Display_employee(emp E1[],int n);
void Search_employee(emp E1[], int n);
void Update_employee(emp E1[], int n);




int main(){
    

    int width = 80;
    char heading []= {"~~EMPLOYEE'S SALARY MANAGEMENT SYSTEM~~"};
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

    printf("%-20s%s\n%-20s%s\n%-20s\n", "1: Add emp's salary", "2: Display emp's salary", "3: Search employee", "4: Update employee", "5: EXIT");
    for(int i=0; i<width ; i++){
        printf("*");
    }
    

    printf("\n");

        int n;
    
    printf("Enter no. of employees user want to enter: ");
    scanf("%d", &n);
    emp E1[MAX];
    if(n>MAX){
        printf("Not valid data!");
        return 0;
    }
 
    do{
        printf("Enter option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1 : {
                Add_employee(E1, n);
                break;
            }
            case 2 : {
                Display_employee(E1, n);
                break;
            }
            case 3 : {
                Search_employee(E1, n);
                break;
            }
            case 4 : {
                Update_employee(E1,n);
                break;
            }
            case 5 : {
                printf("Exiting...\n");
                break;
            }
            
            default : {
                printf("Invalid choice !");
                break;
            }
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

void Add_employee( emp E1[], int n){  

    for(int i=0; i<n; i++){
        printf("Enter emp ID. ");
        scanf("%d", &E1[i].empID);
        printf("Enter name: ");
        scanf("%s", E1[i].name);
        printf("Enter gender (M/F/O): ");
        scanf(" %c", &E1[i].gender);
        printf("Enter emp's salary: ");
        scanf("%d", &E1[i].Salary);
    }
}



void Display_employee(emp E1[],int n){
        int k;
    printf("Enter number of employee user want to display: ");
    scanf("%d", &k);
    if(k>n)
    k=n;

    int width = 80;
    char heading[] = {"Display Employees"};
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

    printf("%-5s %-10s %-20s %-10s %-20s\n", "Sr","Eid","Name", "Gender", "Salary");

    for(int i=0; i<k; i++){
        printf("%-5d %-10d %-20s %-10c %-20d\n", i+1, E1[i].empID, E1[i].name, E1[i].gender, E1[i].Salary);
    }
}

void Search_employee(emp E1[], int n){
    int Roll;
    int True =0;
    printf("Enter empID. to search: ");
    scanf("%d", &Roll);

    int i;
    for(i=0; i<n; i++){
        if(E1[i].empID == Roll){
            printf("Employee Found\n");
            True =1;
            break;
        }
    }

    if(True == 1){
printf("%-5d%-10d %-20s %-10c %-20d\n", i+1, E1[i].empID, E1[i].name, E1[i].gender, E1[i].Salary);
}
else{
    printf("Employee not found");
}
}
void Update_employee(emp E1[], int n){
    int roll;
    int True =0;
    printf("Enter empId. user want to update: ");
    scanf("%d", &roll);

    int i;
    for(i=0; i<n; i++){
        if(E1[i].empID == roll){
            True =1;
            break;
        }
    }

    if(True == 1){
        printf("\nEnter new name: ");
            scanf("%s", E1[i].name);
            printf("\nEnter updated salary: ");
            scanf("%d", &E1[i].Salary);
            
            printf("Employee record updated successfully.\n");
    }else{
        printf("Employee not found");
    }
    
}
