#include<stdio.h>
int main()
{
    //Write a C program to check whether a given number is even or odd.

    int num;

    printf("Enter an integer : ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d is an even integer\n", num);
    }
    else
    {
        printf("%d is an odd integer\n", num);
    }


    getch();

}
