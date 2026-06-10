#include <stdio.h>

int secondLargest(int arr[], int n);

int main()
{
    int arr[100], n, result, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    result = secondLargest(arr, n);

    printf("Second Largest = %d", result);

    return 0;
}

int secondLargest(int arr[], int n)
{
    int i, largest, second;

    largest = second = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    return second;
}