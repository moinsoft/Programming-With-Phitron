#include<stdio.h>
int main()
{
    /*
        Write a C program to take one positive integer N as input and print all divisors of N.

    */


    int n,i;

    printf("Enter an positive integer : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }


    getch();
}
