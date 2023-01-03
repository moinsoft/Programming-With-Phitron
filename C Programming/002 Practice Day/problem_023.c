#include<stdio.h>
int main()
{
    /*
        Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

    */


    int n,i;

    printf("Enter an positive integer : ");
    scanf("%d",&n);

    printf("\n");

    if(n>=1)
    {
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                printf("%d ",i);
            }
            else if(n==1)
            {
                printf("%d is an odd number.\nPlease try to the next digit for printing the even number.",n);
            }

        }
    }
    else
    {
        printf("You have entered the wrong number.\nPlease Enter any positive integer.");
    }



    getch();
}
