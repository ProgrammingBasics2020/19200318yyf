#include<stdio.h>
int fac_bit_count(int n);
int main()
{int n;
scanf("%d",&n);
printf("%d",fac_bit_count(n));
return 0;
}
int fac_bit_count(int n)
{int i,j=0,c;
for(i=n-1;i>=1;i--)
n*=i;
while(n>0)             
	{
		j++;
		n=n/10;            
	}
return j;
}
