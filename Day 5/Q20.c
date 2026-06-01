#include<stdio.h>
int main (){
    int n,i,j,flag;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=n;i>=2;i--)
    {
     flag=1;

     for(j=2;j<=i/2;j++)
     {
       if(i%j==0)
       {
       flag=0;
       break;
     }
    }
    if(flag==1)
    {
      printf("Largest prime number=%d",i);
      break;
    }  
  } 
    return 0;
}