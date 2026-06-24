#include <stdio.h>

// Write a program to Check anagram strings. 

int String_length( char str[]);

int main(){
    char String1[100];
    printf("Enter a random string 1: ");
    fgets(String1, 100, stdin);

     char String2[100];
    printf("Enter a random string 2: ");
    fgets(String2, 100, stdin);

    int len1 = String_length(String1);
    int len2 = String_length(String2);

    if(len1 != len2){
        printf("Not an anagram string");
        return 0;
    }
    int flag1, flag2, True;
    for(int i=0; String1[i] != '\0'  ; i++){
        flag1=0,flag2=0, True=0;
        for(int j=0; String1[j] != 0; j++){
            if(String1[i] == String1[j]){
                flag1++;
            }
        }

        for(int j=0; String2[j] != 0; j++){
            if(String1[i] == String2[j]){
                flag2++;
            }
        }

        if(flag1 == flag2){
            True =1;
        }else{
            break;
        }
    }

    if(True == 1){
        printf("Given string is an anagram");
    }else{
        printf("Given string is not an anagram");
    }

    return 0;
}

int String_length( char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;    
    }
    return i-1;
}