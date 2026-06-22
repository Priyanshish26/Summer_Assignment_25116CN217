#include <stdio.h>

// Write a program to Character frequency.

int String_length( char str[]);

int main(){
    char Word[100];
    printf("Enter a random word : ");
    fgets(Word, 100, stdin);

    int len = String_length(Word);
    int count ;
    int visited[len];
    for(int i=0; i<len; i++){
        visited[i]=0;
    }
    for(int i=0; Word[i] != '\0' ; i++){
        visited[i]=0;
        count = 1;
        for(int j=i+1; Word[j] != 0; j++){
            if(Word[i] == Word[j] && visited[j] == 0){
                count ++;
                visited[j]=1;
            }
        }
        visited[i]=1;
        if(count>1){
            printf("The frequency count of %c is %d\n", Word[i], count);
        }
        
        
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