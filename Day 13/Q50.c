#include <stdio.h>

void largestSmallest(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largestSmallest(arr, n);

    return 0;
}

void largestSmallest(int arr[], int n)
{
    int i, largest, smallest;

    largest = smallest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
}

