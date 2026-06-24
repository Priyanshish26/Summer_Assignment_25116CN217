#include <stdio.h>
#include <string.h>

// Write a program to Compress a string. 

int main(){
    // To input a string
    char String[100];
    printf("Enter a random string: ");
    fgets(String, 100, stdin);

    // To remove next line character
    String[strcspn(String, "\n")] = '\0';

    printf("%s \n", String);

    // To compress a string
    char new_string[100];
    int i=0, j=0;
    int count = 0;
    while(String[i] != '\0'){
        count = 0;
        j=i;
         while( String[i] == String[j]){
                count ++;
                j++;
            }
            printf("%c%d", String[i], count);
            i =j;
        }
         

        return 0;
    }