#include<stdio.h>
int main()
{
	int add,sub,mul,div,a,b;
	printf("enter a number: ");
	scanf("%d",&a);
	printf("enter another number: ");
	scanf("%d",&b);
	add=a+b;
	printf("the sum of two number is : %d \n",add);
	sub=a-b;
	printf("the difference of two number is : %d \n",sub);
	mul=a*b;
	printf("the product of two number is : %d \n",mul);
	div=a/b;
	printf("the quotient of two number is : %d \n",div);
	return 0;
}
