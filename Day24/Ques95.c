#include <stdio.h>

// Write a program to Find longest word.

int main(){
    char String[100];
    printf("Enter a random sentence\n");
    fgets( String, 100, stdin);

    
    int max_count =0 , New_index = 0;
    int count;
    int i=0;
    int j;
    while(String[i] != '\0'){
        count =0;
        if((i== 0 && String[0] != ' ')|| String[i-1] == ' '){
             j=i;
            while(String[j] != ' ' && String[j] != '\0' && String[j] != '\n'){
                count ++;
                j++;
            }

            if(count>max_count){
            max_count = count;
             New_index = i;
        }
         i = j;
           
        }else{
            i++;
        } 

    }

    printf("Longest word is : ");
    for(int k=New_index; k<New_index+max_count ; k++){
        printf("%c", String[k]);
    }

    printf("\nThe longest word length is %d", max_count);

    return 0;
}