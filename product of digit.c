//13.	Write a program to find the product of digits of any number
#include<stdio.h>
int main()
{
	int n,i,r,p=1;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	r=n%10;
	p=p*r;
	n=n/10;	
	}
	printf("%d",p);
}

