#include<stdio.h>
int is_pow2(int n);
int main()
{int n;
printf("����������: ");
scanf("%d",&n);
if(is_pow2(n)==1)
printf("������2���ݴη�.");
else
printf("��������2���ݴη�.");
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
