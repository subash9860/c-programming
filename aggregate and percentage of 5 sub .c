/* 10.	If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks obtained by a student in each subject are 100. 
*/
#include<stdio.h>
int main()
{
	float p,m,c,i,d,a,pr;
	printf("enter the marks ontain in 5 subjects:");
	scanf("%f%f%f%f%f",&p,&m,&c,&i,&d);
	a=(p+c+m+i+d)/5;
	pr=((p+m+c+i+d)*100)/500;
	printf("the aggreate and precentage is :%fand %f",a,pr);
}
