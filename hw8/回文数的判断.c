#include<stdio.h>
int is_int_pal(int x);
int main()
{
	int x;
	printf("������:");
	scanf("%d",&x);
    if (is_int_pal(x)==0)
		printf("����һ��������.");
	   else
		printf("�ⲻ��һ��������.");
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