#include<stdio.h>
int main ()
{
    int i,n,a=0;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("is not prime number");
         return 0;
    }
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
        a=1;
        break;
        }
    }
    if(a==0)
    {
        printf("is a prime number");
    }
     else
    { 
        printf("is not a prime number");

     }
     return 0;

}