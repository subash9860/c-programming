//Write a program to print all the numbers from 10 to 1 and find their sum using while loop.
#include<stdio.h>
int main ()
{
	int i=10,sum=0;
	while(i>=1)
	{
		printf("%d\n",i);
		sum=sum+i;
		i--;
	}
	printf("sum :%d",sum);
}
