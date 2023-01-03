#include<stdio.h>
int main()
{
    /*
        Write a C program to two positive integers N and M as input and print
        all numbers from 1 to N that are divisible by M

    */


    int n,m,i;

    printf("Enter two positive integer : ");
    scanf("%d%d",&n,&m);

    printf("\n");

    for(i=1; i<=n; i++)
    {
        if(i%m==0)
        {
            printf("%d ",i);
        }
    }


    getch();
}
