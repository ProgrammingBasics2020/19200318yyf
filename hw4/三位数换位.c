#include<stdio.h>
 int main()
 {
     int a,b,c,d;
     scanf("%d",&a);
     b=a%10;
     c=a/100;
     d=(a-c*100)/10;
     printf("%d",b*100+d*10+c);
     return 0;
 }