#include<stdio.h>
#include<math.h>
 int main()
 {
	 int a,b,i,j;
	 printf("������һ������1������:\n");
	 scanf("%d",&a);
	 while (a<=1)
	 {
     printf("�����������������!!!!!!!!!!!!!!!\n");
	 printf("������һ������1������:\n");
	 scanf("%d",&a);
	 }
	b=sqrt(a);
	for (i=2;i<=b;i++)
	{if (b%i==0)
         break;
	}
	if(i>b)
		printf("����һ������\n");
	 else 
		 printf("�ⲻ��һ������\n");
	 return 0;
}
