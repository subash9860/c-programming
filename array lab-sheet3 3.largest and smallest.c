/*
3.Write a program to accept 10 numbers and finds and
 prints the largest and smallest among those numbers.
*/
#include<stdio.h>
int main()
{
	int n[10],i,l,s;
	printf("enter the number:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	s=n[0];
	l=n[0];
	for(i=0;i<10;i++)
	{
		if(s>n[i])
		{
			s=n[i];
		}
		if(n[i]>l)
		{
			l=n[i];
		}
	}
	printf("smallest=%d\nlargest=%d",s,l);
}
