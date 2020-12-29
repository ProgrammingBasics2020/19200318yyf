#include<stdio.h>
#include<math.h>
int is_prime(int n);





int main()
{int n,j=0;
  for(n=2;;n++)
  {if(is_prime(n)==0)
  {if(j>=100&&j<=1000)
	  printf("%d ",n);
  j++;}
  
    }
  return 0;
}









int is_prime(int n)
{
	int i,k;
k=sqrt(n);
for(i=2;i<=k;i++)
{if(n%i==0)
break;}
if(i<=k)
return -1;
if(i>k)
return 0;
}