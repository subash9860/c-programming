 //8.Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.
#include <stdio.h>
#include<conio.h>
int main()
{
    int number, positive = 0, negative = 0, zero = 0;
    char ch;
    do{
        printf("\nEnter a number :");
        scanf("%d", &number);
        if (number > 0)
        positive++;
        else if (number < 0)
        negative++;
        else
        zero++;
        printf("Do you want to Continue(y/n)? ");
        scanf("%c", &ch);
        ch=getch();
        }while (ch=='Y' || ch=='y');
        getch();
        printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d",
        positive, negative, zero);
        return 0;
}

