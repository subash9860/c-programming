/* WAP to input any two floating point numbers through the keyboard and calculate addition, subtraction, product and division.
*/
#include<stdio.h>
int main()
{
	float add,sub,mul,div,a,b;
	printf("enter a number: ");
	scanf("%f",&a);
	printf("enter another number: ");
	scanf("%f",&b);
	add=a+b;
	printf("the sum of two number is : %f \n",add);
	sub=a-b;
	printf("the difference of two number is : %f \n",sub);
	mul=a*b;
	printf("the product of two number is : %f \n",mul);
	div=a/b;
	printf("the quotient of two number is : %f \n",div);
	return 0;
}
