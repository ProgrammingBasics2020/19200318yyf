#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(k=1;k<=9-i;k++)
			printf("        ");
	    for(j=1;j<=i;j++)
		    printf("%dX%d=%d  ",j,i,i*j);
	        printf("\n");
	}
	return 0;
}