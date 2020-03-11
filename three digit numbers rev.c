// 9.	Write a program to input three digit numbers and reverse the number.
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,x;
	printf("enter the three digit number :");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	d=c%10;
	e=c/10;
	f=e%10;
	x=b*100+d*10+f;
	printf("%d",x);
}
