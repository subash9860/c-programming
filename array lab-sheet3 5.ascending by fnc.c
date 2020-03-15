#include<stdio.h>
#include<conio.h>
int i,j;
void ascending(int[]);
int main()
{
	int n[10];
	printf("enter the number:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	ascending(n);
	getch();
	
	
}
void ascending(int n[10])
{
	int a;
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
