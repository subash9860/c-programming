//11.	Write a program that will convert temperature in Centigrade into Fahrenheit. [Hint: C=5/9(F-32) and F=9/5*C+32]
#include<stdio.h>
int main()
{
	float c,f;
	printf("enter the temperature in centigrade");
	scanf("%f",&c);
	f=(9/5)*c+32;
	printf("fahrenhite is %f",f);
}
