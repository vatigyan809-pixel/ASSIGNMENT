#include <stdio.h>

void sumAverage(int arr[], int n);

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

    sumAverage(arr, n);

    return 0;
}

void sumAverage(int arr[], int n)
{
    int i, sum = 0;
    float avg;

    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}