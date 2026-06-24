#include <stdio.h>

// Write a program to Find first repeating character. 

int main(){

    // To input a word
    char Word[100];
    printf("Enter a random word: ");
    fgets(Word, 100, stdin);

    // To check repeating character
    int flag ;
    for(int i=0; Word[i] != '\0'; i++){
        flag = 0;
        for(int j=0; Word[j] != '\0'; j++){
            if(Word[i] == Word[j]){
                flag++;
            }
        }
        if(flag>1){
            printf("First repeating character is :  %c", Word[i]);
            break;
        }
    }

    return 0;
}