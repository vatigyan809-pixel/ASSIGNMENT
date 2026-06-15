#include <stdio.h>

int main()
{
    int a[] = {1, 4, 5, 6, 3};
    int n = 5, sum = 9, i, j;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("%d + %d = %d", a[i], a[j], sum);
            }
        }
    }

    return 0;
}