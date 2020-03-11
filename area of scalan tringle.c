#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,Area;
	printf("enter three sides of the tringle\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	if((a+b)>c||(b+c)>a||(c+a)>b)
	{
	Area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("the area of the tringle is%f",Area);
	}
    else
	printf("sides are not valid");
	return 0;
		
}
