#include<stdio.h>
int main (){
    int i,x,n,result=1;

    printf("Enter base and power:");
    scanf("%d,%d",&x,&n);

    for(i=1;i<=n;i++){
        result=result*x;  
    }
     printf("%d^%d=%d",x,n,result);
     return 0;
}