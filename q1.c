#include<stdio.h>
int main()
{
float base,hight,area;
printf("enter base:");
scanf("%f",&base);
printf("enter hight:");
scanf("%f",&hight);

area = 0.5*base*hight; 
printf("area of trangle = %.2f\n",area);
return 0;
} 