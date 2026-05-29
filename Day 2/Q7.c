#include<stdio.h>
int main (){
    int n,product=1,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        product = product*digit;
        n=n/10;
    }
    printf("sum of digit=%d",product);
    return 0;
}