#include <stdio.h>
#include<stdlib.h>
int main()
    {
    	char a[100];
        int i=0,j=0;
        printf("�������ַ���:\n");
        gets(a);
        while(a[i]!='\0')
        i++;
        i--;
        for(;j<=i;i--,j++)
    	{
    		if(a[i]!=a[j])
    		{
    			break;
    		}
    	}
    	if(j<=i)
    	{
    		printf("���ǻ��Ĵ�\n",a);
    	}
    	else
    	{
    		printf("�ǻ��Ĵ�\n",a);
    	}
    	system("pause");
        return 0;
    }