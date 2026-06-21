#include <stdio.h>

// Write a program to Count vowels and consonants.

int Vowel_count(char str[]);
int Consonant_count(char str[]);
void VC_count( char str[] , int *vowel, int*consonants);


int main(){
    // To input a word
    char word[100];
    printf("Enter a random word : ");
    scanf("%s", &word);

    //Method 1
    // counting vowels and consonants
    // int vowelCount = Vowel_count(word);
    // int consonantCount = Consonant_count(word);
    // printf("The vowel count is %d and consonant count is %d", vowelCount, consonantCount);

    //Method 2
     // counting vowels and consonants
    int v=0;
    int c=0;
     VC_count(word, &v, &c);

    printf("The vowel count is %d and consonant count is %d in word %s", v, c, word);


    

    return 0;

}

int Vowel_count(char str[]){
   
    int i =0;
    int V_count = 0;
   
    while (str[i] != '\0'){
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            V_count ++;
        }
         i++;
    }
    return V_count;
}
int Consonant_count(char str[]){
   
    int i =0;
    int C_count =0;

    while (str[i] != '\0'){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            C_count ++;
        }
         i++;
    }
    return C_count;
}


void VC_count( char str[], int *vowel, int*consonants){
int i=0;
while(str[i] != '\0'){
    if(str[i] != 'a'&& str[i] != 'e'&& str[i] != 'i'&& str[i] != 'o'&& str[i] != 'u'){
        (*consonants)++;
    }else{
        (*vowel)++;
    }
    i++;
}

return ;
}
