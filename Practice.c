#include <stdio.h>

float Percentage(float M1, float M2, float M3);

int main(){
    float M1, M2, M3; 
    printf("Enter Marks of Maths, Sanskrit, Science:\n");
    scanf("%f %f %f", &M1, &M2, &M3);
     Percentage(M1, M2, M3);  
    return 0;
}

float Percentage(float M1, float M2, float M3){
     float Calculatepercent = (M1+M2+M3)/300*100;
     printf("The Marks of student is %f ", Calculatepercent);
     return Calculatepercent;
}

