#include<stdio.h>
void sort(int a[]);
int main()
{int b[10],i;
printf("«Î ‰»Î:\n");
for(i=0;i<10;i++)
    scanf("%d ",&b[i]);
sort(b);
for(i=0;i<10;i++)
     printf("%d ",b[i]);
return 0;
}
void sort(int a[])
{int m,j,temp;
for(m=0;m<9;m++)
    for(j=0;j<9-m;j++)
	{if(a[j]>a[j+1])
	{temp=a[j+1];
		    a[j+1]=a[j];
			a[j]=temp;}
	}
}