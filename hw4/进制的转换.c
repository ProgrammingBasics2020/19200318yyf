#include<stdio.h>
int main() 
{
    int i = 0, n, a[32];
    printf("������һ��ʮ����������\n");
    scanf("%d", &n);
    printf("ʮ��������ת��Ϊ�˽�������:%o\n",n);
	printf("ʮ��������ת��Ϊʮ����������:%x\n",n);
    for (; n > 0; n = n/2) 
	a[i++] = n % 2;
    printf("ʮ��������ת��Ϊ����������:");
    for (i--; i >= 0; i--)
	printf("%d", a[i]);
	return 0;
}