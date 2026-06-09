#include <stdio.h>

void countEvenOdd(int arr[], int n);

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

    countEvenOdd(arr, n);

    return 0;
}

void countEvenOdd(int arr[], int n)
{
    int i, even = 0, odd = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
}