// Write a program to calculate factorial of a given number.
#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   f=i*n;
	   printf("%d\n",f);	
	}
}
