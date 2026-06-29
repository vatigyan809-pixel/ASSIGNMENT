#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum=0, max;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do{
        printf("\n1.Display\n2.Sum\n3.Maximum\n4.Exit\n");
        printf("Choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=arr[i];
                printf("Sum=%d",sum);
                break;

            case 3:
                max=arr[0];
                for(i=1;i<n;i++)
                    if(arr[i]>max)
                        max=arr[i];
                printf("Maximum=%d",max);
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=4);

    return 0;
}