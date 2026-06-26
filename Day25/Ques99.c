#include<stdio.h>

//Write a program to Sort names alphabetically. 

typedef struct student {
    char name[100];
} stu;

int main(){


stu Students[20] ;

int n;
printf("Enter no. of student detail user want to input: ");
scanf("%d", &n);
printf("Enter name of students : ");
for(int i=0; i<n; i++){
    scanf("%s", Students[i].name);
}


   for(int i=0; i<n-1; i++){
    for(int k = i+1; k<n; k++){
        int j;
        for( j=0; Students[i].name[j] != '\0' && Students[k].name[j] != '\0' ; j++){
            if(Students[i].name[j] !=  Students[k].name[j] ){
               if(Students[i].name[j] >  Students[k].name[j] ){
                 // swap 
                stu temp;
                temp = Students[i];
                Students[i] = Students[k];
                Students[k] = temp;

               }
               break;
            }
        }
        if(Students[i].name[j] != '\0' && Students[k].name[j] == '\0'){
            stu temp = Students[i];
            Students[i] = Students[k];
            Students[k] = temp;
        }
    }
   }

   printf("Students name - sorted alphabetically\n");
   for(int i=0; i<n; i++){
    printf("%d : %s\n", i+1, Students[i].name);
}

    return 0;
}