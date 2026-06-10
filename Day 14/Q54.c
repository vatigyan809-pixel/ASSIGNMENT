#include <stdio.h>

int frequency(int arr[], int n, int key);

int main()
{
    int arr[100], n, key, count, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    count = frequency(arr, n, key);

    printf("Frequency = %d", count);

    return 0;
}

int frequency(int arr[], int n, int key)
{
    int i, count = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
            count++;
    }

    return count;
}