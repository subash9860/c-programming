// 3.	Write a Program to calculate the area and circumference of the circle.      
#include<stdio.h>
int main()
{
	int r,area,cir;
	printf("enter the radious:");
	scanf("%d",&r);
	area= 3.14*r*r;
	cir= 2*3.14*r;
	printf("Area=%d\n circumference=%d",area,cir);
}
