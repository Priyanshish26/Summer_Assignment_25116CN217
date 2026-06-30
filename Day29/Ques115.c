//Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

#define MAX 100

char str1[MAX], str2[MAX];

void Create_String()
{
    printf("Enter a string: ");
    scanf(" %[^\n]", str1);
}

void Display_String()
{
    printf("String: %s\n", str1);
}

void String_Length()
{
    printf("Length = %lu\n", strlen(str1));
}

void Copy_String()
{
    strcpy(str2, str1);
    printf("Copied string = %s\n", str2);
}

void Reverse_String()
{
    char rev[MAX];
    int len = strlen(str1);

    for(int i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed string = %s\n", rev);
}

void Compare_String()
{
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    int result = strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal\n");
    else if(result > 0)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");
}

void Concatenate_String()
{
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    strcat(str1, str2);

    printf("Concatenated string = %s\n", str1);
}

void Palindrome_Check()
{
    char rev[MAX];
    int len = strlen(str1);

    for(int i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';

    if(strcmp(str1, rev) == 0)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome\n");
}

int main()
{

    
    int choice;

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. String Length\n");
        printf("4. Copy String\n");
        printf("5. Reverse String\n");
        printf("6. Compare Strings\n");
        printf("7. Concatenate Strings\n");
        printf("8. Palindrome Check\n");
        printf("9. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                Create_String();
                break;

            case 2:
                Display_String();
                break;

            case 3:
                String_Length();
                break;

            case 4:
                Copy_String();
                break;

            case 5:
                Reverse_String();
                break;

            case 6:
                Compare_String();
                break;

            case 7:
                Concatenate_String();
                break;

            case 8:
                Palindrome_Check();
                break;

            case 9:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 9);

    return 0;
}