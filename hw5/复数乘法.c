#include <math.h>
#include <stdio.h>
int main()
{
    double r1,p1,r2,p2,g1,g2;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    g1=r1*r2*cos(p1)*cos(p2)-r1*r2*sin(p1)*sin(p2);
    g2=r1*r2*cos(p1)*sin(p2)+r1*r2*sin(p1)*cos(p2);
    if(g1+0.005>=0&&g1<0)
        printf("0.00");
    else
        printf("%.2lf",g1);
    if(g2>=0)
        printf("+%.2lfi\n",g2);
    else if(g2+0.005>=0&&g2<0)
        printf("+0.00i");
    else
        printf("%.2lfi\n",g2);
    return 0;
}