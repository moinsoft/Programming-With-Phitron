#include<stdio.h>
int main()
{
    /*
        Write a C program to take one positive integer N as input and print from 1 to N.

    */


    int n,i;

    printf("Enter an positive integer : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
    }



    getch();
}
