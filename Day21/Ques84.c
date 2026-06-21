#include <stdio.h>

// Write a program to Convert lowercase to uppercase. 

void convertCase(char str[]);

int main(){
    char word[100];
    printf("Enter a random word : ");
    scanf("%s", &word);

    convertCase(word);

    return 0;

}

void convertCase(char str[]){
    int i=0;
    int value ;

    printf("The changed word is : ");
    while(str[i] != '\0'){
        value = (int)str[i];

        if(65<= value  && value<= 90){
            value += 32;
        }else if(97<= value && value <=122){
            value -=32;
        }

        printf("%c", (char)value);
        i++;
    }
}