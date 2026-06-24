#include <stdio.h>

// Write a program to Find maximum occurring character. 

int main(){
    char Word[100];
    printf("Enter a random word : ");
    fgets(Word, 100, stdin);

   
    int count , max_count =0, k; 
    char Char ;
    for(int i=0; Word[i] != '\0'; i++){
       
        int count =0;
        for(int j=0; Word[j] != '\0'; j++){
            if(Word[i] == Word[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            Char = Word[i];
            
        }
    }


    printf("The maximum frequency element is %c and it ocurred %d times", Char,  max_count);

    return 0;
}

