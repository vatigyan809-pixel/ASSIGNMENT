#include<stdio.h>

int armstrong(int);

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}

int armstrong(int n)
{
    int sum=0, rem, temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(temp==sum)
        return 1;
    else
        return 0;
}