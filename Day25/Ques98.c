#include <stdio.h>
#include <string.h>

// Write a program to Find common characters in strings. 

int main(){
    char String1[100];
    printf("enter a string 1: ");
    fgets(String1, 100, stdin);

    String1[ strcspn(String1, "\n")] = '\0';

    char String2[100];
    printf("enter a string 2: ");
    fgets(String2, 100, stdin);

    String2[ strcspn(String2, "\n")] = '\0';

    // int i=0, j=0;
    // while(String1[i] != '\0' && String2[j] != '\0'){
    //     if(String1[i] == String2[j]){
    //         printf("%c", String1[i]);
    //     }
    //     i++, j++;
    // }

    for(int i=0; String1[i] != '\0'; i++){
        for(int j=0;String2[j] != '\0'; j++){
            if(String1[i] == String2[j]){
                printf("%c ", String1[i]);
                String2[j] = '\1';
                break;
            }
        }
    }

    return 0;
}