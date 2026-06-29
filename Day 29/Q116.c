#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n, i;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    printf("\n----- INVENTORY DETAILS -----\n");

    printf("ID\tName\tQty\tPrice\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n",
               p[i].id,
               p[i].name,
               p[i].quantity,
               p[i].price);
    }

    return 0;
}