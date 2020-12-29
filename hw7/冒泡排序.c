#include<stdio.h>
int main()
{
	int a[100];
	int i,j=0,k=0;
	int temp;
	char car='a';
	for(i=0;car!='\n';i++)
	{
		scanf("%d",&a[i]);
		car=getchar();
		j++;
	}
	while(k<j)
	{
		for(i=k;i<j;i++)
		{
			if(a[k]>a[i])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
		k++;
	}
	for(i=0;i<j;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}