#include<stdio.h>
int main()
{
    int a,b,Pa=0,Pb=0; 
    int Da,Db;
    scanf("%d %d %d %d",&a,&Da,&b,&Db);
     while(a > 0) 
	 { 
        if(a % 10 == Da)
            Pa = Pa * 10 + Da;
        a /= 10;
    }
    while(b > 0) 
	{ 
        if(b % 10 == Db)
            Pb = Pb * 10 + Db;
        b /= 10;
    }
    printf("%d",Pa + Pb);
     return 0;
}
