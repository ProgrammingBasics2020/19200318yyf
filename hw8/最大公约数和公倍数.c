#include <stdio.h>

int GCD_recursive(int m, int n)
{
    if (n%m==0)
        return m;
    return GCD_recursive(n%m,m);
}

int GCD_iterative(int m, int n)
{
    int t;
    while (n%m!=0)
    {
        t=n%m;
        n=m;
        m=t;
    }
    return m;
}

int LCM(int m, int n)
{
    return m * n / GCD_recursive(m,n);
}

int main()
{
    int m,n;

    scanf("%d%d",&m,&n);
    
    if (m > n)
    {
        m=m^n;
        n=n^m;
        m=m^n;
    }

    printf("%d\n", GCD_recursive(m,n));
    printf("%d\n", GCD_iterative(m,n));
    printf("%d", LCM(m, n));
}