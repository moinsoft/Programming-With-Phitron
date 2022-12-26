#include<stdio.h>
int main()
{
    //Write a C program to check whether a given number is positive or negative.

    int num;

    printf("Enter an integer : ");
    scanf("%d",&num);

    if (num>=0)
    {
        printf("%d is a positive number\n", num);
    }
    else
    {
        printf("%d is a negative number\n", num);
    }


    getch();

}
