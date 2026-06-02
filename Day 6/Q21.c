#include<stdio.h>
int main (){
    int decimal,rem,binary=0,base=1;
    printf("Enter decimal number");
    scanf("%d",&decimal);
      while(decimal>0){
        rem=decimal%2;
        binary=binary+rem*base;
        decimal=decimal/2;
        base=base*10;
      }
      printf("Binary=%d",binary);
      return 0;
}