#include<stdio.h>
int main()
{
    /*
        Write a C program to take two positive integers as input and show the summation, subtraction and
        multiplication of those two numbers.
    */

    int num1,num2,sum,sub,multi;

    printf("Enter two positive integer : ");
    scanf("%d %d",&num1,&num2);

    sum = num1+num2;
    sub = num1-num2;
    multi = num1*num2;

    printf("The summation, subtraction and multiplication of those two numbers %d, %d, %d",sum,sub,multi);


    getch();

}

