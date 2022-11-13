#include<stdio.h>
int main()
{
    //Write a C program to accept two integers and check whether they are equal or not.

    int num1,num2;

    printf("Enter two integer number : ");
    scanf("%d %d",&num1,&num2);

    if (num1 == num2)
    {
        printf("Number1 and Number2 are equal.");
    }
    else
    {
        printf("Number1 and Number2 are not equal");
    }


    getch();

}
