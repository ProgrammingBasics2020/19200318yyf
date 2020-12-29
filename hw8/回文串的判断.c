#include <stdio.h>
#include<stdlib.h>
int main()
    {
    	char a[100];
        int i=0,j=0;
        printf("请输入字符串:\n");
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
    		printf("不是回文串\n",a);
    	}
    	else
    	{
    		printf("是回文串\n",a);
    	}
    	system("pause");
        return 0;
    }