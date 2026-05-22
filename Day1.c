#include <stdio.h>
int main() {
    int num , sum =0;
    printf("Enter a number N: ");
    scanf("%d", &num);
    while(num!=0){
        sum+=num;
        num--;
    }
    printf("The sum of first N natural numbers is : %d ", sum);

    return 0;
}