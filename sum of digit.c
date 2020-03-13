//14.	Write a program to find the sum of digits of any number.
#include<stdio.h>
int main()
{
	int n,i,r,s=0;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	r=n%10;
	s=s+r;
	n=n/10;	
	}
	printf("%d",s);
}

