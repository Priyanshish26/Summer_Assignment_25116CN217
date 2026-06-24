#include <stdio.h>
#include <string.h>

// Write a program to Check string rotation

int String_length( char str[]);
void String_rotation(char String1[], char String2[] );

int main(){
    // To input two strings
    char String1[100];
    printf("Enter a random  a string : ");
    fgets(String1, 100, stdin);

    char String2[100];
    printf("Enter a random  a string : ");
    fgets(String2, 100, stdin);

    // To remove next line character
    String1[strcspn(String1, "\n")] = '\0';
    String2[strcspn(String2, "\n")] = '\0';

    // To determine the length of strings
    int len1 = String_length(String1);
    int len2 = String_length(String2);

    //To check if both strings are of equal length
    if(len1 != len2){
        printf("Entered string is not a string rotation.");
        return 0;
    }

    // To check if string is a string rotation
    int flag =0 ;
    for(int i=0; String1[i] != '\0'; i++){
         char temp= String1[0];
        
        for(int j=0; j< len1 -1; j++){
            String1[j]=String1[j+1];
        }
        String1[len1 -1] = temp;
        
        if(strcmp(String1 , String2) == 0){
           flag =1;
            break;
        }
    }

    // to print final output
    if(flag){
         printf("Entered string is a string rotation\n");
    }else{
         printf("Entered string is not a string rotation\n");
    }

    String_rotation(String1, String2);

    return 0;
}

int String_length( char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;    
    }
    return i;
}

void String_rotation(char String1[], char String2[] ){
    char String[200];
    strcpy(String, String1);
    strcat(String, String1);
    printf("%s\n", String);

    int flag =1;
    for(int i=0; String[i] != '\0'; i++){
        if(String[i] == String2[0]){
            for(int j=1 ; String2[j] != '\0'; j++){
                if(String2[j] != String[i+j]){

                    flag=0;
                    break ;
                }
            }
            
        }
        if(flag == 1){
            break;
        }

        printf("i = %d\n", i);


    }

    if(flag ){
        printf("String rotation");
    }else{
        printf("Not a string rotation");
    }
    
}
