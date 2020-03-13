//11.	Write a program to display square of given number if it is odd and cube if it is even.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	(n%2==0)?printf("square:%d",n*n):printf("cube:%d",n*n*n);
	
}
