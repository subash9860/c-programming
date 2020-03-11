// 12.	Write a program that asks three coefficients of a quadratic equation and calculate its root.
#include<stdio.h>
#include<math.h>
 int main()
 {
 	int a,b,c,r,m;
 	printf("enter the coefficients a,b,c");
 	scanf("%d%d%d",&a,&b,&c);
 	r=(-b+sqrt(b*b-4*a*c))/2*a;
 	m=(-b-sqrt(b*b-4*a*c))/2*a;
 	printf("the roots are %d and %d",r,m);
 }
