// 6.	Write a program to convert entered number of seconds into hours, minutes and seconds.
#include<stdio.h>
int main()
{
	int s,m,h,x;
	printf("enter the number of second");
	scanf("%d",&s);
	h=s/3600;
	x=s%3600;
	m=x/60;
	s=x%60;
	printf("h:m:s=%d:%d:%d",h,m,s);
}
