/*
4.Write a program that asks user to enter 10 numbers and
 sorts them in an ascending order and
 display the sorted number.
*/
#include<stdio.h>
int main()
{
	int n[10],i,j,a;
	printf("enter the number:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(n[i]>n[j])
			{
			a=n[i];
			n[i]=n[j];
			n[j]=a;
		}
		}
	}
	printf("assending order are:\n");
	for(i=0;i<10;i++)
	printf("\t%d",n[i]);
	
}
