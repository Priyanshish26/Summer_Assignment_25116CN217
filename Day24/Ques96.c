#include <stdio.h>
#include <string.h>


// Write a program to Remove duplicate characters.

int main(){
    // To input a string
    char String[100];
    printf("Enter a string : ");
    fgets(String, 100, stdin);

    // to remove next line character
    String[strcspn(String, "\n")] = '\0';

   
    char new_str[100];
    int k =0;

    // To remove duplicate characters
    
    int flag;
    for(int i=0; String[i] != '\0'; i++){
       flag =0;
       for(int j=0; j<i; j++){
        if(String[i] == String[j] ){
           flag =1;
           break;
        }
       }

       if(flag == 0){
        new_str[k] = String[i];
        k++;
       }
    }

    puts(new_str);
    return 0;
}

