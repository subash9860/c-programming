//17.	Two number are entered through keyboard and if the first number is greater than second number then print the sum of number otherwise print the difference of number (use tannery operator)
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	(a>b)?printf("sum=%d",(a+b)):printf("diff=%d",(a-b));
}
