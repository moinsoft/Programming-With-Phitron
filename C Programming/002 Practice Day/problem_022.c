#include<stdio.h>
int main()
{
    /*
        Write a C program to take one integer N as input and print from 1 to N.

    */


    int n,i;

    printf("Enter an integer : ");
    scanf("%d",&n);

    printf("\n");

    if(n>1)
    {
        for(i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
    }
    else if(n<1)
    {
        for(i=1; i>=n; i--)
        {
            printf("%d ",i);
        }
    }





    getch();
}
