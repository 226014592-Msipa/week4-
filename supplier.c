#include <stdio.h>

int main()
{
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;


    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter tender price: ");
    scanf("%f", &price);

    printf("Enter available budget: ");
    scanf("%f", &budget);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

   
    printf("Supplier: %s\n", supplierName);
    printf("Price: %.2f\n", price);

  
    if (registered == 1 && documentsComplete == 1 && price <= budget) {
        printf("Status: QUALIFIED\n");
    }
    else{
        printf("Status: DISQUALIFIED\n");
    }

    return 0;
}