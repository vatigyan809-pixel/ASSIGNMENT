#include<stdio.h>
int main (){
    int i, n,temp,rem,fact, sum=0;
    printf("Enter a number");
    scanf("%d",&n);

    temp=n;
    while(temp>0){
        rem=temp%10;
        fact=1;
      for(i=1;i<=rem;i++){
        fact=fact*i;
      }
       
      sum=sum+fact;
      temp=temp/10;
    }
    if(sum==n){
       printf("strong number");
        }
      else {
          printf("Not a strong number");
      }
          return 0;
}