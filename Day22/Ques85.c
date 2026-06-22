#include <stdio.h>


// Write a program to Check palindrome string. 


int String_length(char str[]);

void Palindrome_str(char str[]);

int main(){

    // To input a Random word
    char Word[100];
    printf("Enter a random word:\n");
    fgets(Word, 100, stdin);

    Palindrome_str(Word);

    return 0;
}

int String_length( char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;    
    }
    return i-1;
}

void Palindrome_str(char str[]){
    int flag;

    // to calculate string length
    int len = String_length(str);
    
    for(int i=0; i<len-1; i++){
        flag =0;
        if(str[i] == str[len-1-i]){
            flag =1;
        }else{
            break;
        }
    }

    if(flag == 1){
        printf("Entered string is a palindrome!");
    }else{
         printf("Entered string is not a palindrome!");
    }
}