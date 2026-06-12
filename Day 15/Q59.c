#include <stdio.h>

int rightRotate(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    rightRotate(arr, n);

    printf("Right rotated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

int rightRotate(int arr[], int n)
{
    int i, temp;

    temp = arr[n-1];

    for(i = n-1; i > 0; i--)
        arr[i] = arr[i-1];

    arr[0] = temp;

    return 0;
}