#include<stdio.h>
int main()
{
	int n,i,sum,r;
	for(n=1;n<=500;n++)
	{
		i=n;
		sum=0;
		while(i!=0)
		{
		r=i%10;
		sum=sum+(r*r*r);
		i=i/10;
		
		}
	if(n==sum)
	printf("%d\n",n);
}
}
