#include<stdio.h>
int main()
{
    int i,N,sum,high,r,d,k;
    char c;
    scanf("%d %c",&N,&c);
    sum=0;
    for(i=1;sum<=N;i++)
    {
        sum=2*i*i-1;
    }
    high=i-2;
    sum=2*high*high-1;
//  printf("%d\n%d\n",sum,high);
    r=N-sum;
    for(d=high;d>0;d--)
    {
        if(d<high)
            {
                for(k=high-d;k>0;k--)
                {
                        printf(" ");
                }
            }
            for(i=2*d-1;i>0;i--)
            {
                printf("%c",c);
            }
            printf("\n");

    }
    for(d=2;d<=high;d++)
    {
            if(d<high)
            {
                for(k=high-d;k>0;k--)
                {
                        printf(" ");
                }
            }
        for(i=2*d-1;i>0;i--)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",r);


}