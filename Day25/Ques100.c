#include <stdio.h>

// Write a program to Sort words by length.


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

// to sort by length
int count[n];

for(int i=0; i<n; i++){
    int len =0;
    for(int j=0; Students[i].name[j] != '\0'; j++){
        len ++;
    }
    count[i] = len;
}

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(count[i]>count[j]){
            int temp = count[j];
            count[j]=count[i];
            count[i]=temp;

            stu var = Students[j];
            Students[j]=Students[i];
            Students[i]=var;
        }
    }
}

for(int i=0; i<n; i++){
    printf("%d %s\n", i+1, Students[i]);
}

return 0;
}