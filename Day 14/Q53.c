#include <stdio.h>

int linearSearch(int arr[], int n, int key);

int main()
{
    int arr[100], n, key, pos, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = linearSearch(arr, n, key);

    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", pos + 1);

    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    int i;

    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
            return i;
    }

    return -1;
}