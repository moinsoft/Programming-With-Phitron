#include<stdio.h>
int main()
{
    /*
        Write a C program to take integer value as input and print that value. There is a twist!
        The input will contain a % sign.
    */

    int num;
    char ch;

    printf("Enter an integer value with %% sign : ");
    scanf("%d %c",&num,&ch);

    printf("The integer value is = %d",num);

    getch();

}
