/*WAP to calculate and print simple interest if values of p, t, r are given.
[ si= p * t * r/100]
*/
#include<stdio.h>
int main()
{
	int si,p,t,r;
	printf("enter principle:");
	scanf("%d",&p);
	printf("enter time:");
	scanf("%d",&t);
	printf("enter rate:");
	scanf("%d",&r);
	si=(p*t*r)/1000;
	printf("the intrest is:%d",si);
	return 0;
}
