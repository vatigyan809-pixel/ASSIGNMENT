#include <stdio.h>

int moveZero(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    moveZero(arr, n);

    printf("Array after moving zeroes: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

int moveZero(int arr[], int n)
{
    int i, j = 0, temp;

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    return 0;
}