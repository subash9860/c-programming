//12.	Two numbers are entered through the keyboard. Write a program to find the value of one number raise to the power of another.
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,p;
	printf("enter two number:");
	scanf("%d%d",&x,&y);
	p=pow(x,y);
	printf("the value of one number raise to the power of another is: %d",p);
}
