#include <stdio.h>

int main()
{
    int a[] = {1, 2, 2, 3, 2, 4};
    int n = 6, i, j, count, max = 0, element;

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > max)
        {
            max = count;
            element = a[i];
        }
    }

    printf("Maximum frequency element = %d", element);

    return 0;
}