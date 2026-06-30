#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct Inventory_Product
{
    int id;
    char name[50];
    int quantity;
    float price;
} Product;

void Add_Product(Product p[], int *n)
{
    printf("Enter Product ID: ");
    scanf("%d", &p[*n].id);
    printf("Enter Product Name: ");
    scanf(" %[^\n]", p[*n].name);
    printf("Enter Quantity: ");
    scanf("%d", &p[*n].quantity);
    printf("Enter Price: ");
    scanf("%f", &p[*n].price);

    (*n)++;
}

void Display(Product p[], int n)
{
    printf("\nID\tName\t\tQty\tPrice\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\t%.2f\n",
               p[i].id, p[i].name, p[i].quantity, p[i].price);
    }
}

void Search(Product p[], int n)
{
    int id, found = 0;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("Found: %s | Qty: %d | Price: %.2f\n",
                   p[i].name, p[i].quantity, p[i].price);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Product not found\n");
}

void Update(Product p[], int n)
{
    int id;

    printf("Enter Product ID to update: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("Enter new name: ");
            scanf(" %[^\n]", p[i].name);
            printf("Enter new quantity: ");
            scanf("%d", &p[i].quantity);
            printf("Enter new price: ");
            scanf("%f", &p[i].price);
            printf("Updated successfully\n");
            return;
        }
    }

    printf("Product not found\n");
}

void Delete(Product p[], int *n)
{
    int id;

    printf("Enter Product ID to delete: ");
    scanf("%d", &id);

    for(int i = 0; i < *n; i++)
    {
        if(p[i].id == id)
        {
            for(int j = i; j < *n - 1; j++)
            {
                p[j] = p[j + 1];
            }

            (*n)--;
            printf("Product deleted\n");
            return;
        }
    }

    printf("Product not found\n");
}

void Sell(Product p[], int n)
{
    int id, qty;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("Enter quantity to sell: ");
            scanf("%d", &qty);

            if(qty <= p[i].quantity)
            {
                p[i].quantity -= qty;
                printf("Sale successful. Remaining stock: %d\n", p[i].quantity);
            }
            else
            {
                printf("Not enough stock\n");
            }
            return;
        }
    }

    printf("Product not found\n");
}

int main()
{
    Product p[MAX];
    int n = 0, choice;

    do
    {
        printf("\n~~~~~~~ INVENTORY SYSTEM ~~~~~~~~\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Sell Product\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n < MAX)
                    Add_Product(p, &n);
                else
                    printf("Inventory Full!\n");
                break;

            case 2:
                Display(p, n);
                break;

            case 3:
                Search(p, n);
                break;

            case 4:
                Update(p, n);
                break;

            case 5:
                Delete(p, &n);
                break;

            case 6:
                Sell(p, n);
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 7);

    return 0;
}