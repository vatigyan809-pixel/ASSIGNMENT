#include <stdio.h>

int main()
{
    int a[] = {1, 2, 2, 3, 4, 4};
    int n = 6, i, j;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                a[j] = -1;
            }
        }
    }

    printf("Array after removing duplicates: ");

    for(i = 0; i < n; i++)
    {
        if(a[i] != -1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}