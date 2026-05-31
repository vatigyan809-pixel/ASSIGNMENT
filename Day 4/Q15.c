#include<stdio.h>
#include<math.h>
int main (){
    int n,original,remainder,digit=0,result=0;
    printf("Enter a number:");
    scanf("%d",&n);
     
    original=n;
     
    while(original!=0){
        original=original/10;
        digit++;

    }
     
      original=n;

      while(original !=0){
        remainder = original%10;
        result=result+round(pow(remainder,digit));
        original=original/10;
      }
      printf("n=%d\n",n);
      printf("digit=%d\n",digit);
       printf("result=%d\n",result);
      if(result==n){
         printf("Armastrong number");
      }
      else{
           printf("Not an armstrong number");
      }
           return 0;   
}
