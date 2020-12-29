#include<stdio.h>
int is_int_pal(int x);
int main()
{
	int x;
	printf("请输入:");
	scanf("%d",&x);
    if (is_int_pal(x)==0)
		printf("这是一个回文数.");
	   else
		printf("这不是一个回文数.");
    return 0;
}
int is_int_pal(int x)
{ int n,newed,t;
    while(x!=EOF)
    {
        newed=0;
        n=x;
        do
        {
            newed=newed*10+x%10;
            x/=10;
        }while(x>0);
        if(n==newed)
           return 0;
        else
           return 1;
    }}