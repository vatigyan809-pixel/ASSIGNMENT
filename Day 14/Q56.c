#include <stdio.h>

void findDuplicate(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    findDuplicate(arr, n);

    return 0;
}

void findDuplicate(int arr[], int n)
{
    int i, j;

    printf("Duplicate elements are: ");

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
}