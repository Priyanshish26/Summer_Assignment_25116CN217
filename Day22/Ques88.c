#include <stdio.h>

// Write a program to Remove spaces from string. 

int main(){
    char String[100];
    printf("Enter a random word: ");
    fgets(String, 100, stdin);

    char new_String[100];
    int i=0, j=0;
    while(String[i] != '\0'){
        if(String[i] != ' '){
            String[j++] = String[i];
            
        }
        i++;
    }

    String[j]='\0';
    
    printf("The string without spaces is \n");
    puts(String);

    return 0;
}