// 8.	Write a program to convert length from mm to km, m, cm and mm.
#include<stdio.h>
int main()
{
	int mm,km,m,cm,x,y;
	printf("enter the millmeter:");
	scanf("%d",&mm);
	km=mm/1000000;
	x=mm%1000000;
	m=x/100;
	y=x%100;
	cm=y/10;
	mm=y%10;
	printf("km:m:cm:mm=%d:%d:%d:%d",km,m,cm,mm);
}
