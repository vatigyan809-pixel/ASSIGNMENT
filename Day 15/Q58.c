#include <stdio.h>

int leftRotate(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    leftRotate(arr, n);

    printf("Left rotated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

int leftRotate(int arr[], int n)
{
    int i, temp;

    temp = arr[0];

    for(i = 0; i < n-1; i++)
        arr[i] = arr[i+1];

    arr[n-1] = temp;

    return 0;
}