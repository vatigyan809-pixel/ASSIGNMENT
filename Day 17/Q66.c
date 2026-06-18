#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4};
    int b[] = {3,4,5,6};
    int c[10], i, j, k = 0, found;

    for(i = 0; i < 4; i++)
        c[k++] = a[i];

    for(i = 0; i < 4; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
                found = 1;
        }
        if(found == 0)
            c[k++] = b[i];
    }

    printf("Union: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}