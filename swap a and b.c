// 14.	Two numbers are input through the keyboard. Write a program to interchange the   contents.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number :");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\nb=%d",a,b);
}
