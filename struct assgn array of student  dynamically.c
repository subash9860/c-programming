/*
TU EXAM QUESTION 
Define a structure of student having data members name,
address, marks in C language, and marks in information system.
Take data for n students in an array dynamically 
and find the total marks obtained. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct student
{
	char name[20],address[20];
	int marks_c, marks_it;
};
void main()
{
	struct student *s;
	int n,i,total=0;
	printf("enter how many student:\n");
	scanf("%d",&n);
	s=(struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("name:\t");
		scanf("%s",(s+i)->name);
		printf("address:\t");
		scanf("%s",(s+i)->address);
		printf("marks in c programming:\t");
		scanf("%d",&(s+i)->marks_c);
		printf("marks in information system:\t");
		scanf("%d",&(s+i)->marks_it);
		getch();
	}
	printf("\nname\taddress\tmarks_c\t marks_it\ttotal\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t%d\t%d\t\t%d\n",(s+i)->name,(s+i)->address,(s+i)->marks_c,(s+i)->marks_it,((s+i)->marks_c)+(s+i)->marks_it);		
	}
}
