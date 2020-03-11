// 20.	Write a program that ask a number and print the remainder after dividing the number by 5.
#include<stdio.h>
int main()
{
	int n,r;
	printf("enter the number ");
	scanf("%d",&n);
	r=n%5;
	printf("the reminder is %d",r);
}
