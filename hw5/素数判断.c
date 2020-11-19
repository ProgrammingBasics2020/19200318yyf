#include<stdio.h>
#include<math.h>
 int main()
 {
	 int a,b,i,j;
	 printf("请输入一个大于1的数字:\n");
	 scanf("%d",&a);
	 while (a<=1)
	 {
     printf("输入错误，请重新输入!!!!!!!!!!!!!!!\n");
	 printf("请输入一个大于1的数字:\n");
	 scanf("%d",&a);
	 }
	b=sqrt(a);
	for (i=2;i<=b;i++)
	{if (b%i==0)
         break;
	}
	if(i>b)
		printf("这是一个素数\n");
	 else 
		 printf("这不是一个素数\n");
	 return 0;
}
