// 5.	Write a program to divide one integer by another integer and find the quotient and remainder.
#include<stdio.h>
int main()
{
	int q,r,a,b;
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	r=a%b;
	q=a/b;
	printf("quotient=%d\nreminder=%d",q,r);
}
