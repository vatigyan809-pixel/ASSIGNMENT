#include <stdio.h>

int main()
{
    int a[] = {1, 2, 4, 5};
    int n = 5, sum = 0, total, i;

    for(i = 0; i < 4; i++)
    {
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}