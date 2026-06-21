#include <stdio.h>

// Write a program to Reverse a string.

int String_length( char str[]);
void Reverse_word(char str[]);

int main(){
    char word[100];
    printf("Enter a random word : ");
    scanf("%s", &word);
    Reverse_word(word);

    return 0;
    
}

int String_length( char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;
        
    }
    return i;
}

void Reverse_word(char str[]){
    int len = String_length(str);
    int start =0; 
    int end = len-1;
    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end]= temp;

        start++, end--;
    }

    printf("Reversed word is %s",str);
}