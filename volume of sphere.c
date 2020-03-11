// 19.	Write a program that ask the radius of sphere and print the volume of sphere.
#include<stdio.h>
int main()
{
	int r , vol;
	printf("enter the radious of the sphere");
	scanf("%d",&r);
	vol=(4/3)*r*r*r*3.14;
	printf("volume=%d",vol);
}
