#include <stdio.h>
 int main()
 {
	 int radius=0, circumference=0,area=0;
	 printf("半径=");
	 scanf("%d",&radius);
	 area=radius*radius;
     circumference=2*radius;
     printf("面积(area)=%dπ\n",area);
	 printf("周长(circumference)=%dπ\n",circumference);
	
	 return 0;
 }