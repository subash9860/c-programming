/*
•WAP to input breadth and length of rectangle through keyboard and calculate area and perimeter.
•[area = l *b;peri= 2 * (l+b)]
*/
#include<stdio.h>
void main()
{
	int area, l,b,peri;
	printf("enter the length of rectangle:\n");
	scanf("%d",&l);
	printf("enter the breadth of rectangle:\n");
	scanf("%d",&b);
	area= l*b;
	printf("the area of triangle is:%d\n",area);
	peri=2*(l+b);
	printf("the perimeter of triangle is:%d\n",peri);
	
}
