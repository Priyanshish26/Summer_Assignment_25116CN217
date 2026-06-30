#include <stdio.h>
#include <string.h>
#define MAX 100
void Create_arr(int arr[], int n){
    printf("Enter the elements of an array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}
void Display_arr(int arr[], int n){
    printf("The Elements of an array is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
void Insert_ele(int arr[], int *n){
    int element, position;
    
    printf("Enter the position(1 to %d) ", *n+1);
    scanf("%d", &position);

    if(n == MAX)
{
    printf("Array is full.\n");
    return;
}

    

    if(position < 1 || position > *n + 1)
    {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements one position to the right
    for(int i = *n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    (*n)++;

    printf("Element inserted successfully.\n");

}

void max_arr(int arr[], int n){
    int largest, smallest;
    largest = arr[0];
   smallest = arr[0];

   for(int i=1; i<n; i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
    if(arr[i]< smallest){
        smallest = arr[i];
    }
   
   }
   printf("Largest in array is %d\n", largest);
   printf("Smallest in array is %d", smallest);
}

void check(int array[], int size){
    int evencount=0, oddcount=0 ;

    for(int i=0; i<size ; i++){
        if(array[i]%2 == 0){
          evencount++;  
        }else{
            oddcount++;
        }

    }

    printf("The even count of elements is %d.\n", evencount);
    printf("The odd count of elements is: %d.",oddcount);
}
void Linear_search(int arr[], int n){
    int element;
    int flag=0;
    printf("Enter a element: ");
    scanf("%d", &element);

    for(int i=0; i<n; i++){

        if(arr[i] == element){
           flag =1; 
           break;
        }
        else{
            flag = 0;
        }
    }
    if(flag == 1){
        printf("Element found");
    }else{
        printf("Element not found");
    }
}
void Sum_arr(int arr[], int n){
    int Sum =0;
    for(int i=0; i<n; i++){
        Sum += arr[i];
    }
    printf("Sum of array = %d", Sum);
}

int main(){
    int n;
    int choice;
    printf("Enter The size of array: ");
    scanf("%d", &n);

    int arr[MAX];

if(n > MAX)
{
    printf("Size cannot exceed %d\n", MAX);
    return 0;
}

     int width = 80;
    char heading []= {"~~ARRAY OPERATIONS~~"};
    int spaces = (width - strlen(heading))/2;

    for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%*s%s", spaces,  " ", heading);
    printf("\n\n");
   
    for(int i=0; i<width ; i++){
        printf("*");
    }
    

    printf("\n");

    printf("1: Input array\n");
    printf("2: DisplayArray\n");
    printf("3: Insert element\n");
    printf("4: Search element\n");
    printf("5: Sum of array elements\n");
    printf("6: Evencount and oddcount\n");
    printf("7: largest and smallest element\n");
    printf("8: EXIT");


    do{
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            Create_arr(arr,n);
            break;
            case 2:
            Display_arr(arr,n);
            break;
            case 3: 
            Insert_ele(arr,n);
            break;
            case 4:
            Linear_search(arr, &n);
            break;
            case 5:
            Sum_arr(arr,n);
            break;
            case 6:
            check(arr,n);
            break;
            case 7:
            max_arr(arr,n);
            break;
            case 8:
            printf("Exiting...");
            break;
        default:
        printf("Invalid case!");
            break;
        }
    }while(choice != 8);

    for(int i=0; i<width ; i++){
        printf("*");
    }
    printf("\n");
    printf("%40s", "EXIT");
    printf("\n");

     for(int i=0; i<width ; i++){
        printf("*");
    }
   
    return 0;

}