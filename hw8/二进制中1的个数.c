#include<stdio.h>
#include<stdlib.h>
int a(unsigned int value)
{
    int count = 0;
    while (value != 0)
    {
        if (value % 2 == 1)
        {
            count++;
        }
        value = value >>1;
    }
    return count;
}
int main()
{
    int num;
    int ret;
    printf("������һ������0����\n");
    scanf("%d", &num);
    ret=a(num);
    printf("%d", ret);
    system("pause");
    return 0;
}