/*
2.Write a program to enter 10 different numbers and
 print them with array variables and their addresses.
*/
#include<stdio.h>
int main()
{
	int n[10],i;
	printf("enter the numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("\n\narray variables and their addresses\n");
	for(i=0;i<10;i++)
	{
	printf("addresses[%d]=%d\n",i,n[i]);
	}
}
