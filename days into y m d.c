//7.	Write a program to convert entered number of days into years, months and days.
#include<stdio.h>
int main()
{
	int y,m,d,x;
	printf("enter the numbers of days:");
	scanf("%d",&d);
	y=d/365;
	x=d%365;
	m=x/30;
	d=x%30;
	printf("y/m/d=%d/%d/%d",y,m,d);
}
