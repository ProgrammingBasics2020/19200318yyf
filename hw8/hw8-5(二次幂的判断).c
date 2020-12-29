#include<stdio.h>
int is_pow2(int n);
int main()
{int n;
printf("请输入数字: ");
scanf("%d",&n);
if(is_pow2(n)==1)
printf("该数是2的幂次方.");
else
printf("该数不是2的幂次方.");
return 0;
}
int is_pow2(int n)
{int i,j;
for(i=0,j=1;;i++)
{j*=2;
  while(j==n) 
	  break;}
  return 1;
 }
