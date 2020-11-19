#include<stdio.h>
int main() 
{
    int i = 0, n, a[32];
    printf("请输入一个十进制整数：\n");
    scanf("%d", &n);
    printf("十进制整数转换为八进制数是:%o\n",n);
	printf("十进制整数转换为十六进制数是:%x\n",n);
    for (; n > 0; n = n/2) 
	a[i++] = n % 2;
    printf("十进制整数转换为二进制数是:");
    for (i--; i >= 0; i--)
	printf("%d", a[i]);
	return 0;
}