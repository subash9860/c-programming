/*1.Write a program that asks user to enter 10 numbers, 
    read them into an array and 
    finds the sum, product, average and 
    maximum of all numbers and prints them.
*/
#include<stdio.h>
int main()
{
	int n[10],i,sum=0,p=1,max;
	float avg;
	printf("enter the numbers:\n");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&n[i]);
	sum=sum+n[i];
	p=p*i;
	}
	avg=(float)sum/10;
	max=n[1];
	for(i=1;i<=10;i++)
	{
		if(n[i]>max)
		max=n[i];
	}
	printf("sum=%d\nproduct=%d\naverage=%f\n max=%d",sum,p,avg,max);
}
