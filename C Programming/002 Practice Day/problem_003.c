#include<stdio.h>
int main()
{
    /*
        Write a C program to take one positive integer as input and print double of it.
    */

    int num,sum;

    printf("Enter an positive integer : ");
    scanf("%d",&num);

    sum = num+num;

    printf("Double the entered number %d",sum);


    getch();

}



