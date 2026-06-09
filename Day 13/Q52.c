#include <stdio.h>

void inputDisplay(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter size: ");
    scanf("%d", &n);

    inputDisplay(arr, n);

    return 0;
}

void inputDisplay(int arr[], int n)
{
    int i;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}