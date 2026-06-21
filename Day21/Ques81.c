#include <stdio.h>

// Write a program to Find string length without strlen().

void String_length( char str[]);
int main(){
    char word[100];
    printf("Enter a random word: ");
    scanf("%s", &word);

    String_length(word);

    return 0;
}

void String_length( char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;     
    }
    printf("The length of word (%s) is %d", str, i);
}


