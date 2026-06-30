#include <stdio.h>
#include <string.h>
#define MAX 100

// Write a program to Create employee management system. 

typedef struct Employee{
    int empID ;
    char name[100];
    char gender;
    

    
}emp;

void Add_employee( emp E1[], int n);
void Sort_employee(emp E1[], int n);
void Display_employee(emp E1[],int n);
void Search_employee(emp E1[], int n);
void Update_employee(emp E1[], int n);




int main(){
    

    int width = 80;
    char heading []= {"~~EMPLOYEE MANAGEMENT SYSTEM~~"};
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

    printf("%-20s%s\n%-20s%s\n%-20s%s\n", "1: Add employee","2: Sort employee", "3: Display employee", "4: Search employee", "5: Update employee", "6: EXIT");
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
                Sort_employee(E1, n);
                break;
            }
            case 3 : {
                Display_employee(E1, n);
                break;
            }
            case 4 : {
                Search_employee(E1, n);
                break;
            }
            case 5 : {
                Update_employee(E1,n);
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

void Add_employee( emp E1[], int n){  

    for(int i=0; i<n; i++){
        printf("Enter emp ID. ");
        scanf("%d", &E1[i].empID);
        printf("Enter name: ");
        scanf("%s", E1[i].name);
        printf("Enter gender (M/F/O): ");
        scanf(" %c", &E1[i].gender);
    }
}

void Sort_employee(emp E1[], int n){
        int choice;
    int flag=0;
    printf("How would you like to Sort\n1: Name\n2:emp ID: ");
    scanf("%d", &choice);
    if(choice == 1){
        flag =1;
                // Sort by names
                int i=0, j=0;
         if(strcmp(E1[i].name,E1[j].name)>0)
{
    emp temp=E1[i];
    E1[i]=E1[j];
    E1[j]=temp;
}
}else{
        // Sort by emp ID
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(E1[j].empID>E1[j+1].empID){
                emp temp = E1[j+1];
                E1[j+1]=E1[j];
                E1[j]=temp;
            }
        }
    }
    }

    // to print Sorted Data

    if(flag){

        // Sort by names
    printf("Sorted by name\n");
   for(int i=0; i<n; i++){
    printf("%d : %s\n", i+1, E1[i].name);
    }
    
}else{

    // to print sort by emp ID
printf("Sorted by emp ID \n");
    for(int  i=0; i<n; i++){
        printf("%d ", E1[i].empID);
    }
    printf("\n");
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

    printf("%-5s %-10s %-20s %-10s\n", "Sr","Eid","Name", "Gender");

    for(int i=0; i<k; i++){
        printf("%-5d %-10d %-20s %-10c\n", i+1, E1[i].empID, E1[i].name, E1[i].gender);
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
printf("%-5d%-10d %-20s %10c\n", i+1, E1[i].empID, E1[i].name, E1[i].gender);
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
            
            printf("Employee record updated successfully.\n");
    }else{
        printf("Employee not found");
    }
    
}
