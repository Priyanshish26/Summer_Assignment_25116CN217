#include <stdio.h>

// Write a program to Count words in a sentence.

int String_length( char str[]);
int main(){
    char Sentence[100];
    printf("Enter any random sentence\n");
    fgets(Sentence, 100, stdin);

    int len = String_length(Sentence);
    printf("The length of this sentence is %d\n", len);

    // To count the word in the sentence
    int i =0;
    int count=0;
    while(Sentence[i] != '\0'){
        if(i == 0 && Sentence[0] != ' ' || Sentence[i-1] == ' '){
            count++;
        }
        i++;
    }

    printf("No. of words are: %d", count);
    
    return 0;

}

int String_length( char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;    
    }
    return i-1;
}